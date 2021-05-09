/*
    Accepted
*/
#include <iostream>
#include <vector>
using namespace std;

void transpose(vector<vector<int>> &ar,int N)
{
    for (int i = 0; i <= N; i++) 
            for (int j = i+1; j <= N; j++) 
                swap(ar[i][j], ar[j][i]);
}

void print(vector<vector<int>> ar,int n)
{
    for(int i=0;i<n;i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<"\n";
        }
}
void solve()
{
    int n,k=1;
    cin>>n;
    vector<vector<int>> ar(n,vector<int>(n)),
                        cr(n,vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>ar[i][j];
            cr[i][j]=k;
            k++;
        }          
    }
    // print(cr,n);
    int count=0;
    for (int i = n-1; i > 0; i--)
    {
        if(ar[i][i-1]!=cr[i][i-1])
        {
            count++;
            transpose(ar,i);
        }
    }
    cout<<count;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}