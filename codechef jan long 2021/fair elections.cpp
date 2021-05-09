#include <iostream>
#include <algorithm>
#include <vector>

#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,a,b) for(int i=a;i<=b;i++)
#define rfo(i,n) for(int i=n;i>=0;i--)

using namespace std;

void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    	freopen("input.txt","r",stdin);
    	freopen("output.txt","w",stdout);
    #endif
    int t=1;
    cin>>t;
    while(t--)
    {
	solve();
	cout<<"\n";
    }
    return 0;
}

void solve()
{
    int n,m,sa=0,sb=0,c=0,m1= INT_MIN ,m2= INT_MIN ;
    cin >> n  >> m;
    vector<int> a(n), b(m);
    fo(i,n){
    	cin >> a[i] ;
    	sa += a[i] ;
    }
    fo(i,m){
    	cin >> b[i] ;
    	sb += b[i] ;
    }
    if(sb<sa){
    	cout << 0 ;
    }
    else{
    	sort(b.begin(), b.end(),greater<int>());
    	sort(a.begin(),a.end());
    	int i,k=min(n,m);
    	for(i=0;i<k;i++){
    		sa += b[i]-a[i] ;
    		sb += a[i]-b[i] ;

    		if(sa>sb){
    			cout<<i+1;
    			return;
    		}
    	}
    	cout<<-1;
    }
}