#include <iostream>
#include <math.h>
#define deb(x) cout<<#x<<" "<<x<<endl;
using namespace std;

void solve();
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		solve();
		cout << "\n";
	}
	return 0;
}

void solve()
{
	int n,k,x,y;
	cin >> n >> k >> x >> y;
	int s=x;
	if(k==0)
	{
		if(x==y)cout<<"YES";
		else cout<<"NO";
	}
	else if(k==1 || abs(x-y)%k==0 || x==y)
	{
		cout<<"YES";
	}
	else
	{
		int s=x;
		while(x!=y)
		{
			x = (x+k)%n;
			if(x==y)
			{
				cout<<"YES";
				return;
			}
			if(x==s)break;
		}
		cout<<"NO";
	}
}