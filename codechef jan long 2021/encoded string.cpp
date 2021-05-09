#include <iostream>
using namespace std;

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
    int n;
    cin>>n;
    string s;
    cin >> s;
    int index=0;
    string hp="abcdefghijklmnop";
    for(int i=0;i<n;i+=4)
    {
    	int j=0,m,f=0,l=15;
    	while(j<4)
    	{
    		m = (f+l)/2;
    		if(s[i+j]=='0'){
    			l=m;
    		}else{
    			f=m+1;
    		}
    		j++;
    	}
    	cout<<hp[f];
    }
}