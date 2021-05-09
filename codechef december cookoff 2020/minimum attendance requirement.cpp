#include <iostream>
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
	int n,c=0;
	cin>>n;
	string b ;
	cin>>b;
	for(int i=0;i<n;i++)
	{
		if(b[i]=='1')c++;
	}
	if(90>c+120-n)cout<<"NO";
	else cout<<"YES";
}