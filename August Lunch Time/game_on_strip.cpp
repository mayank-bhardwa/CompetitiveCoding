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
    int n;
    cin>>n;
    int a;
    int lar=0,cur=0,slar=0;
    fo(i,n)
    {
        cin>>a;
        if(a==0)
        {
            cur++;
            if(i==n-1)
            {
                slar=min(lar,cur);
                lar=max(lar,cur);
            }
        }
        else {
            slar=min(lar,cur);
            lar=max(lar,cur);
            cur=0;
        }
    }

    //cout<<lar<<" "<<slar<<endl; 
    if(lar%2==0)cout<<"No\n";
    else 
    {
        if(slar > lar/2)
        {
            cout<<"No\n";
        }
        else cout<<"Yes\n";
    }
}