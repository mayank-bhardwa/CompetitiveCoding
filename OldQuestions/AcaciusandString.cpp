/*
    CPP Program To count check if a string contains 
    "abacaba" once we shoult replace '?' with any lower 
    case alphabet if we could get such string print 
    Yes along with the possible solution else print No
*/

//ACCEPTED

/*
    Submitted by : Mayank Bhardwaj
    I you copy my code I will kill 
    you in your dream
*/
#include <iostream>
#include <algorithm>
#define fo(i,n) for (int i = 0; i < n; ++i)
#define Fo(i,a,n) for (int i =a; i <= n; ++i)
; 
using namespace std;
string aim="abacaba";


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
    int n,count=0;
    //vector<int> index;
    cin>>n;
    string s;
    cin>>s;
    n--;

    string copys;

    Fo(i,0,n-6)
    {
        copys=s;
        bool st=true;
        Fo(j,0,6)
        {
            if(copys[i+j]!=aim[j] && copys[i+j]!='?')
            {
                st=false;
                break;
            }
            copys[i+j]=aim[j];
        }

        if(st)
        {
            int count=0;
            Fo(k,0,n-6)
            {
                if(copys.substr(k,7)==aim)
                {
                    count++;
                }
            }

            if(count==1)
            {
                replace(copys.begin(),copys.end(),'?','d');
                cout<<"YES\n"<<copys<<"\n";
                return;
            }
        }
    }
        cout<<"NO\n"; 
}