#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, a, b) for (int i = a; i <= b; i++)
#define rfo(i, a, b) for (int i = a; i >= b; i--)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL), cout.tie(NULL);
#define ll long long
#define pb push_back
#define um unordered_map
#define vi vector<int>
using namespace std;

void solve();
int main()
{
    fast;
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
    for (int i = 0; i < 2 * n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());

    for (int i = 0; i < 2 * n; i++)
    {
        if (i % 3 == 0)
        {
            a[i] ^= a[i - 1];
            a[i - 1] ^= a[i];
            a[i] ^= a[i - 1];
        }
    }

    for (auto i : a)
        cout << i << " ";
}