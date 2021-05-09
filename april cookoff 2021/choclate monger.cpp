#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve()
{
    int n, x, d = 0;
    cin >> n >> x;
    vector<int> A(n);
    unordered_map<int, int> isdone;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        isdone[A[i]]++;
        if (isdone[A[i]] == 1)
            d++;
    }

    n = n - x;
    cout << min(n, d);
}

int main()
{
#ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}