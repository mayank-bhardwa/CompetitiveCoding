#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    long long t,a,b,x,y,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x>>y>>n;

        long long r1,r2,n2;
        {
            n2 = (a-n >= x)? 0 : (x+n-a);
            r1 = max(x,a-n)*max(y,b-n2);
        }
        {
            n2 = (b-n >= y)? 0 : (n+y-b);
            r2= max(x,a-n2)*max(y,b-n);
        }
        
        cout<<min(r1,r2)<<endl;
    }
    return 0;
}