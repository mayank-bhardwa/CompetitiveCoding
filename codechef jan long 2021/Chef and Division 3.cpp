#include <iostream>
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
    int n,k,d;
    cin>>n>>k>>d;
    int tp=0,a;
    fo(i,n) {
    	cin >> a;
    	tp += a;
    }
    n = tp/k;
    cout<<min(d,n); 
}