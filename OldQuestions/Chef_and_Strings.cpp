#include<bits/stdc++.h>
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
    int n;
    long long int count=0;
    cin>>n;
    vector<int> spluck(n);
    for(int i=0;i<n;i++)
    {
      cin>>spluck[i];
        if(i>0){
            if(spluck[i]>spluck[i-1])count+= spluck[i]-spluck[i-1]-1;
            else if(spluck[i]<spluck[i-1]) count+= spluck[i-1]-spluck[i]-1;
            else{
                count+=0;
            }
        }
    }
    cout<<count<<endl;
}

int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    } 
  return 0;
}