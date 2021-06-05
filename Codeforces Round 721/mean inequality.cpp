#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve();
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(2 * n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++)
    {
        if (i % 3 == 0)
            swap(a[i], a[i - 1]);
    }

    for (auto i : a)
        cout << i << " ";
}