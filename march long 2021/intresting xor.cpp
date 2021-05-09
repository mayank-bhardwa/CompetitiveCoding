#include <iostream>
#include <math.h>
#define ll long long 

using namespace std;
void solve();
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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
	ll n,a,sum,ans,s=0,m=1;
	cin>>n;
	m=log2(n)+1;
	s=1<<m;
	m++;
	a = (1 << (m-2)) - 1 ;
	sum = s-n;
	ans = a*(a+sum);
	cout<<ans;
}