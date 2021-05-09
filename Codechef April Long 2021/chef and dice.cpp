#include <iostream>
#define ll long long
using namespace std;

int solve()
{
    ll n, rem, sum = 0;
    cin >> n;

    rem = n % 4;
    sum = (n / 4) * 44;

    if (n >= 4)
    {
        if (rem == 0)
            sum = sum + 16;
        if (rem == 1)
            sum = sum + 32;
        if (rem == 2)
            sum = sum + 44;
        if (rem == 3)
            sum = sum + 55;

        cout << sum << endl;
    }
    else
    {
        if (n == 1)
            cout << 20 << endl;
        if (n == 2)
            cout << 36 << endl;
        if (n == 3)
            cout << 51 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t, n;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }

    return 0;
}
