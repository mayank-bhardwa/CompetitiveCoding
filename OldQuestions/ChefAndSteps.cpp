#include <iostream>
#define fo(i,a) for(int i=0;i<a;i++)

using namespace std;

void solve();
void judge()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main()
{
    judge();
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
void solve()
{
    int n,k;
    cin>>n>>k;
    int d ;
    fo(i,n)
    { 
        cin >> d ;
        if(d%k==0)cout << 1 ;
        else cout << 0 ;
    }
    cout<<"\n";
}