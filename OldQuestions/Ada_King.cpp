#include<bits/stdc++.h>
#define fo(i,a,b) for(int i=a;i<b;i++)
using namespace std;

void fast()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif*/
}

void solve()
{
    int k,f=0;
    cin>>k;
    char out[8][8];
    fo(i,0,8)
    {
        fo(j,0,8)
        {
           if(k)
            { 
                if(f==0){out[i][j]='O';f=1;}
                else out[i][j]='.';
                k--;
            }
            else if(k==0)
            {
                out[i][j]='X';
            }
        }
    }
    fo(i,0,8)
    {
        fo(j,0,8)
        {
            cout<<out[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    fast();
  int t;
  cin>>t;
  while(t--)solve();
  return 0;
}