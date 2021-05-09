#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#define ipair pair<int,int>
#define check(c) cout<<#c<<" "<<c<<" ";
using namespace std;

int BFS(vector<vector<pair<int,double>>> meeting_time,unordered_map<int,int> &visited,queue<pair<int,double>> Q)
{
    int c=0;
    pair<int,double> k;
    while(!Q.empty())
    {
        k=Q.front();
        Q.pop();
        for(int i=0;i<meeting_time[k.first].size();i++)
        {
            if(visited[meeting_time[k.first][i].first]==0)
            {
                if(k.second < meeting_time[k.first][i].second)
                {
                    visited[meeting_time[k.first][i].first]++;
                    Q.push(meeting_time[k.first][i]);
                    c++;
                }
            }
        }
    }
    return c;
}

void solve()
{
    int n;
    cin>>n;
    vector<int> A(n+1);
    for(int i=1;i<=n;i++)cin>>A[i];
    vector<vector<pair<int,double>>> meeting_time(n+1);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if (i!=j)
            {
                if(i<j && A[i]>A[j])    meeting_time[i].push_back({j,(double)(j-i)/(A[i]-A[j])});
                if(i>j && A[i]<A[j])   meeting_time[i].push_back({j,(i-j)/(double)(A[j]-A[i])});
            }


    int mn = INT_MAX,mx=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        unordered_map<int,int> visited;
        queue<pair<int,double>> Q;
        int positive=1;
        visited[i]++;
        for(auto j : meeting_time[i])
        {
            visited[j.first]++;
            Q.push(j);
            positive++;
        }

        positive +=BFS(meeting_time,visited,Q);
        mn=min(mn,positive);
        mx=max(mx,positive);
    }
    cout<<mn<<" "<<mx;
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
}