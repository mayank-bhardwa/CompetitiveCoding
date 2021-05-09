#include<bits/stdc++.h>
#define ll long long int
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
  long long  n,k,l;
  cin>>n;
  n = 4*n - 1;
  set<ll>x,y;
  for(long long  i=0;i<n;i++)
  {
    cin>>k>>l;
    if(x.count(k))
    {
        x.erase(k);
    }
    else
    {
        x.insert(k);
    }

    if(y.count(l))
    {
        y.erase(l);
    }else{
        y.insert(l);
    }
  }
  
  cout<<*x.begin()<<" "<<*y.begin()<<endl;
}

int main()
{
    fast();
  long long  t;
  cin>>t;
  while(t--)solve();
  return 0;
}