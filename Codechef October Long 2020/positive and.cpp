#include <iostream>
using namespace std;

bool isPowerOfTwo (int x) 
{ 
    return x && (!(x&(x-1))); 
}
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
	int n;
	cin>>n;
	if(n==1)cout<<1;
	else if(n==3)cout<<"1 3 2";
	else if(isPowerOfTwo(n))cout<<-1;
	else 
	{
		cout<<2<<" "<<3<<" "<<1<<" ";
		for(int i=4;i<=n;i++)
		{
			if(isPowerOfTwo(i))
			{
				cout<<i+1<<" "<<i<<" ";
				i++;
			}
			else
			{
				cout<<i<<" ";
			}	
		}
	}
}