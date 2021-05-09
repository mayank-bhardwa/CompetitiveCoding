#include <iostream>
#define deb(a) cout<<#a<<" "<<a;
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int arr[n];
	long long sum=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	bool f=true,s=false;
	for (int i = 0; i < n;)
	{
		if(i==n-1)
		{
			if(f)cout<<"FIRST\n";
			else cout<<"SECOND\n";
			break;
		}
		else
		{
			if(arr[i]>1)
			{
				arr[i]=1;
			}
			else
			{
				i++;
			}
			f=!f;
			s=!s;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)solve();
	return 0;
}