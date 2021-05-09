#include <iostream>
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,a,b) for(int i=a;i<=b;i++)
#define rfo(i,n) for(int i=n;i>=0;i--)

using namespace std;
void Not(string &s,int i)
{
	if(s[i]=='0')s[i]='1';
	else s[i] = '0';
}

void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    	freopen("input.txt","r",stdin);
    	freopen("output.txt","w",stdout);
    #endif
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
  string a; cin>>a;
  string b; cin>>b;
  int n = a.size();

  int ans = 0;
  for(int i=0;i<n;i++){
    if(a[i]==b[i]) continue;
    int ptr = i;
    while(ptr<n and a[ptr]!=b[ptr]){
      a[ptr]=b[ptr];
      ptr+=2;
    }
    ans++;
	}
	cout<<ans;
}