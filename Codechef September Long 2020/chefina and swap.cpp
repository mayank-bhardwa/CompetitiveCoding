#include<iostream>
#include<math.h>
#define ll long long
using namespace std;

ll SUM(ll n)
{
	return (n*(n+1))>>1;
}

void solve()
{
	ll n,ans=0,sm;
	cin>>n;
	sm=SUM(n);
	if(sm & 1) ans = 0;
	else
	{
		double tmp = sm/2;
		double k = (sqrt(8*tmp + 1)/2) - 0.5;
		double deci,init;
		deci = modf(k,&init);
		ll ans2 = (ll)k;
		if(deci==0) ans = SUM(ans2-1)+SUM(n-ans2-1);
		ans +=n-ans2;
	}
	cout<<ans;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
		cout<<"\n";
	}
	return 0;
}