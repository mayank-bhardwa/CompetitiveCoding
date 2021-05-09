#include<iostream>

using namespace std;

int main()
{
    int t,i=1;
    cin>>t;
    while(t--)
    {
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        cout<<"Case #"<<i<<": ";
        if(c>a || c>b || c>n || (a==b && c!=a) )cout<<"IMPOSSIPLE\n";
        else 
        {
            for(int i=0;i<a-c;i++)
            {
                cout<<1<<" ";
            }
            for(int i=0;i<c;i++)
            {
                cout<<2<<" ";
            }
            for(int i=0;i<b-c;i++)
            {
                cout<<1<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}