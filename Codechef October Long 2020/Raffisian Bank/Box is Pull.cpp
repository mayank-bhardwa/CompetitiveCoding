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
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
	if(x1==x2)cout<<abs(y2-y1);
	else if(y1==y2)cout<<abs(x2-x1);
	else{
		
	}    
}