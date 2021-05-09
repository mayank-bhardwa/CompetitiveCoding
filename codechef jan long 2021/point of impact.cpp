#include <bits/stdc++.h>
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
	int n,k,x,y;
	cin >> n >> k >> x >> y ;

	int c = y + x ;
	k=k%4;

	pair<int,int> coor[4];

	coor[0] = {c, 0}; // 0
	coor[1] = {n, c-n};  // 1
	coor[2] = {c-n, n};  // 2
	coor[3] = {0, c}; // 3

	if(x==y){
		cout<<n<<" "<<n;
	}
	else if(x>y){
		cout<<coor[k].first<<" "<<coor[k].second;
	}
	else{
		k= (k+1)%4;
		cout<<coor[k].first<<" "<<coor[k].second;
	}

	/*
		y = 0 x = -c
		x = n y = n + c
	*/
}