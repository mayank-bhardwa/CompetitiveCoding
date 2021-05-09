/*
        Accepted
*/
#include <iostream>
#include <unordered_map>
#include <map>
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
    int n,k;
    cin>>n;
    unordered_map<int,int> a;
    fo(i,n)
    {
        cin>>k;
        a[k]++;
    }
    
    //pair<int,int> mins={0,0};
    map<int,int> mins;
    for(auto i: a)
    {
        mins[i.second]++;
    }
    pair<int,int> fre={0,0};
    for(auto i : mins)
    {
        if(i.second > fre.second)
        {
            fre = i;
        }
    }
    cout<<fre.first<<endl;
}