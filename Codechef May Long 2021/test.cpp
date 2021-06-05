#include <iostream>
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
    int n, m, c = 0;
    cin >> n >> m;

    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (isValid(i, j, m))
                c++;
        }
    }
    cout << c;
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