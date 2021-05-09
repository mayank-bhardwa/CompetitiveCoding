/*
    Successfully submitted 
*/
#include <iostream>
#include <vector>
#include <algorithm>

#define fo(i,n) for(int i=0;i<n;i++)

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
    vector<int> a(n);
    fo(i,n)cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
    int l=a[0],op=0;
    for(auto i : a)
    {
        if(i<l)
        {
            op++;
            l=i;
        }
    }
    if(l>0)cout<<op+1<<endl;
    else cout<<op<<endl;
}