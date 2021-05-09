#include <iostream>
#include <numeric>
#include <vector>
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,a,b) for(int i=a;i<=b;i++)
#define rfo(i,n) for(int i=n;i>=0;i--)

using namespace std;
long long sm(vector<int> pr)
{
	long long s=0;
	for(auto i:pr)s+=i;
	return s;
}

void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    	freopen("input.txt","r",stdin);
    	freopen("output.txt","w",stdout);
    #endif
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
	int k,x;
	cin>>k>>x;
	vector<int> pr(k,1);
	long long lc = 1;
	int mx;
	while(lc!=x)
	{
		mx = 0;
		for(int i=1;i<k;i++)
		{
			if(lcm(lc,pr[i]+1)>lcm(lc,pr[mx]+1))
			{
				mx=i;
			}
		}
		pr[mx]++;
		lc = lcm(pr[mx],lc);
	}
	cout<<sm(pr);
}