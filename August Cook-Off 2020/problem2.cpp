/*
    Passed
*/
#include <iostream>
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,a,b) for(int i=a;i<=b;i++)
#define rfo(i,a,b) for(int i=a;i>=b;i--)
#define mod 1e9+7
#define ll long long
using namespace std;

void solve();
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}

void solve()
{
    int n,x,y;
    cin>>n;    
    fo(i,n){cin>>x>>y;}
    int count=n;
    while(n>>1 > 2)
    {
        n=n>>1;
        count+=n;
    }
    cout<<count<<endl;
}