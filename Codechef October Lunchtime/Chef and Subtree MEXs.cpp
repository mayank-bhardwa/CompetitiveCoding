#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void ngood(vector<int> a, int n)
{
	int temp=1,good=1;
	unordered_map<int,int> count;

	for(int i=0;i<n;i++)
	{
		if(count[a[i]]==0)temp++;
		else
		{
			count[a[i]]++;
			good = max(temp,good);
			temp = 1;
		}
	}
	cout<<max(temp,good)<<endl;
}

void solve()
{
	int n,q,x,y;
	cin>>n>>q;
	vector<int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<q;i++)
	{
		cin>>x>>y;
		a[x-1] = y;
		ngood(a,n);
	}
}

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
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}