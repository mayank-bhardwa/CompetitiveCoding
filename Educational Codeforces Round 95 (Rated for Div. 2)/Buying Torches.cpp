#include <iostream>
#include <math.h>
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
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}

void solve()
{
    long long trades=0,x,y,k,hold_stick=1,requires;
    cin>>x>>y>>k;
    requires = k*y + k;
    trades = ceil((requires-1)/(x-1));
    // while(hold_stick < requires)
    // {
    //     trades++;
    //     hold_stick +=x-1;
    // }

    cout<<trades+k;
}   