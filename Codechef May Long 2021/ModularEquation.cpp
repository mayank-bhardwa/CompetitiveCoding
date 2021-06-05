#include <iostream>
#include <vector>
#define deb(x) cout << #x << " " << x << endl;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool isValid(int a, int b, int m)
{
    if (((m % a) % b) == ((m % b) % a))
        return true;
    else
        return false;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int c = n - 1;

    int ans = 0;
    int x;
    for (int i = 1; i < n; i++)
    {
        if (m < i)
        {
            x = n - i + 1;
            ans += (n * (n - 1)) >> 1;
        }
        else if(m == i) {
            ans += 0;
        }
    }
    cout << ans;
}

int main()
{
    fast;
#ifndef ONLINE_JUDGE
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