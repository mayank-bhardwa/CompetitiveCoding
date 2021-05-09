#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve();
int main(int argc, char const *argv[])
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
		cout<<"\n";
	}
	return 0;
}
void solve()
{
	int n,x,p,k;
	cin >> n >> x >> p >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	sort(arr.begin(),arr.end());
	if(arr[p]==x)cout<<0;
	else if(k >=p && arr[p-1] >= x)
	{
		int s=p-1;
		for(;s>=0;s--)
		{
			if(arr[s]<=x)break;
		}
		cout<<p-s-1;
	}
	else if(k <= p && arr[p-1] <= x)
	{
		int s=p-1;
		for(;s<n;s++)
		{
			if(arr[s]>=x)break;
		}
		cout<<s-p+1;
	}
	else 
	{
		cout<<-1;
	}
}