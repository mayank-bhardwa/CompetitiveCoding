#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,a,b,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b) swap(a,b);
        d=(b-a)/10;
        if(d*10 + a != b)d++;
        cout<<d<<endl;
    }
}