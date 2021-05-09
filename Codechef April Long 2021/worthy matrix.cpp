#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

/*
    2 2 3
    3 4 5
    4 5 5
*/

void solve()
{
    ll n, m, k, count = 0;
    cin >> n >> m >> k;
    vector<vector<int>> A(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
            if (A[i][j] >= k)
                count++;
        }
    }

    vector<vector<ll>> sum(n + 1, vector<ll>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] + A[i - 1][j - 1] - sum[i - 1][j - 1];
        }
    }

    ll ans = 0;
    for (int r1 = 1; r1 <= n; r1++)
    {
        for (int c1 = 1; c1 <= m; c1++)
        {
            int l = 1, r = min(n - r1 + 1, m - c1 + 1), res = -1, mx = r;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                int r2 = r1 + mid - 1, c2 = c1 + mid - 1;
                ll cur = sum[r2][c2] - sum[r1 - 1][c2] - sum[r2][c1 - 1] + sum[r1 - 1][c1 - 1];
                ll ele = (mid) * (mid);
                if (cur >= k * ele)
                    r = mid - 1, res = mid;
                else
                    l = mid + 1;
            }
            if (res != -1)
                ans += mx - res + 1;
        }
    }

    cout << ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}