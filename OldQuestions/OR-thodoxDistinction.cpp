//successfully accepted
#include <iostream>
#include <vector>
#define deb(a) cout<<#a<<" "<<a<<" ";
#define Fo(i,a,n) for (int i =a; i < n; ++i)
#define ll long long
using namespace std;

void solve();

int main()
{
  	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;
        cin>>t;
        while(t--)solve();
	return 0;
}

void solve()
{
    int n;
    cin>>n;
    vector<long long> a(n);
    ll *b[n];
    b[0] = new ll[n];
    Fo(i,0,n)
    {
    	cin>>a[i];
    	b[0][i]=a[i];
    }
    if(n==1){
        cout<<"YES\n";
        return;
    }
    Fo(i,1,n)
    {
        b[i]=new ll[n-i];
        Fo(j,0,n-i)
        {
            b[i][j] = b[i-1][j]|b[i-1][j+1];
        }
        //deb(b[i][n-i-1]);
        if(b[i][n-i-1]==b[i-1][n-i])
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}