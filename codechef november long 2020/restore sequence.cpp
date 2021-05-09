#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector<int> primes;

void generate()
{
	int n = 1300000;
	vector<bool> prime(n+1,true);
	int p = ceil(sqrt(n));

    for(int i=2;i<=p;i++)
    {
        if(prime[i])
            for(int j=i+i;j<=n;j+=i)
                prime[j] = false;
    }

    int k=0;
    for(int i=2;i<=n;i++)
        if(prime[i])
        {
        	primes.push_back(i);
        }
}

void solve()
{
	int n,k=0;
	cin>>n;
	int b[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}

	for(int i = 0;i<n;i++)
	{
		cout<<primes[b[i]]<<" ";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	generate();
	int t;
	cin>>t;
	while(t--)
	{
		solve();
		cout<<endl;
	}
	return 0;
}