#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve()
{
	int n,t,pos=0;
	string cmd;
	cin>>n>>t;
	while(t--)
	{
		cin>>cmd;

		if(cmd == "RIGHT")
		{
			if((pos+1)%n != 0)
				pos++;
		}
		else if(cmd == "LEFT")
		{
			if(pos!=0 && pos%n!=0)
				pos--;
		}
		else if(cmd == "DOWN")
		{
			if(pos + n < n*n -1)
				pos += n;
		}
		else
		{
			if(pos-n > 0)
				pos -= n;
		} 
	}
	cout << pos;
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
	solve();
	return 0;   
}