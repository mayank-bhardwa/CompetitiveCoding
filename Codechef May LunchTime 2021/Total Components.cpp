#include <iostream>
#include <vector>
#include <math.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL), cout.tie(NULL);
using namespace std;

vector<bool> prime;
void getAll(int size)
{
    int p = ceil(sqrt(size));
    for (int i = 2; i <= p; i++)
    {
        if (prime[i])
            for (int j = i + i; j <= size; j += i)
                prime[j] = false;
    }
}

void solve();
int main()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    const int size = 1e7;
    prime = vector<bool>(size + 1, true);
    getAll(size);

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
    int c = 0;
    vector<int> res;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            c++;
        }
    }
    // cout << c << " ";
    if (n > 6)
        c = ceil((c + 1) / 2.0);

    cout
        << c;
}