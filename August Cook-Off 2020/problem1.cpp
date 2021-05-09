/*
    Passed
*/
#include <iostream>
#include <vector>
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
    int n,maxhold;
    cin>>n>>maxhold;
    vector<int> w(n);
    fo(i,n)cin>>w[i];
    int count = 1;
    int hold = 0;
    fo(i,n)
    {      
        if(w[i] > maxhold)
        {
            cout<<-1<<endl;
            return;
        }
        else if(w[i]+hold > maxhold)
        {
            hold=w[i];
            count++;
        }
        else
        {
            hold+=w[i];
        }
    }    
    cout<< count<<endl;
}