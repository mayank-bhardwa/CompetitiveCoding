#include <iostream>
#include <queue>
using namespace std;

void solve()
{
	int n,k,count=0;
	cin>>n>>k;
	string s;
	cin>>s;
	queue<int> mag,iron;

	for(int i=0;i<n;i++)
	{
		if(s[i]=='I')iron.push(i);
		if(s[i]=='M')mag.push(i);
		if(s[i]=='X' || i==n-1)
		{
			int l,r,sheet;
			while(!mag.empty() && !iron.empty())
			{			
				sheet=0;
				l = min(mag.front(),iron.front());
				r = max(mag.front(),iron.front());
				for(int q=l;q<=r;q++)
				{
					if(s[q]==':')sheet++;
				}
				if( (k+1-abs(l-r)-sheet) > 0)
				{
					count++;
					mag.pop();
					iron.pop();
				}
				else if(mag.front()<iron.front())mag.pop();
				else iron.pop();
			}
			while(!mag.empty())mag.pop();
			while(!iron.empty())iron.pop();
		}
	}
	cout<<count;
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
		cout<<"\n";
	}
	return 0;
}