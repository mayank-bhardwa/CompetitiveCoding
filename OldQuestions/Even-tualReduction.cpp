//Accepted

#include <iostream>
#include <algorithm>
#define deb(a) cout<<#a<<" "<<a;
#define Fo(i,a,n) for (int i =a; i < n; ++i)

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
    int n,count;
    cin>>n;
    string s;
    cin>>s;
    if(n%2==1){cout<<"NO\n";return;}
    sort(s.begin(),s.end());
    count=1;
    Fo(i,1,n)
    {
        if(s[i]==s[i-1])count++;
        else 
        {
            if(count%2!=0)
            {
                cout<<"NO\n";
                return;
            }
            else
            {
                count=1;
            }
        }
    }

    cout<<"YES\n";
}