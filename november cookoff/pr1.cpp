#include <iostream>
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,a,b) for(int i=a;i<=b;i++)
#define rfo(i,n) for(int i=n;i>=0;i--)
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    	freopen("input.txt","r",stdin);
    	freopen("output.txt","w",stdout);
    #endif
    int n,m,k;
    cin>>n>>m>>k;
    int count=0;
    for(int i=0;i<n;i++)
    {
    	int tme=0,tmp;
    	for(int j=0;j<k;j++)
    	{
    		cin>>tmp;
    		tme += tmp;
    	}
    	cin>>tmp;
    	if(tmp<=10 && tme>= m)count++;
    }
    cout<<count;
    return 0;
}