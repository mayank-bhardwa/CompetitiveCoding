#include <iostream>
#include <unordered_map>
#define fo(i,n) for(int i=0;i<n;i++)

#define mod 1e9+7
#define ll long long
#define ump unordered_map
#define vi vector<int>
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
    string s;
    unordered_map<char,int> sq;
    fo(i,n)        
    {
        cin>>s;
        
        for(auto i : s)
        {
            sq[i]++;
        }
    }

    for(auto i : sq)
    {
        if(i.second%n != 0)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}