#include<iostream>
#define fo(i,a) for(int i=0;i<a;i++)

using namespace std;


void solve();
void judge()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
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
    int n,m,x,y;
    int res;
    cin>>n>>m>>x>>y;
    if(n==1&&m==1)
    {
        res=x;
    }
    else if(x*2 <= y)
    {
        res = x*n*m;
    }
    else
    {
        if(x>y)
        {
            x=y;
            y=0;
        }
        else{
            y-=x;
        }
        n*=m;
        if( n%2 != 0)
        {
            res = ((n/2)+1)*max(x,y) + (n/2)*min(x,y); 
        }
        else
        {
            res = (n/2)*y + (n/2)*x;
        } 
    }
    cout<<res<<"\n";
}