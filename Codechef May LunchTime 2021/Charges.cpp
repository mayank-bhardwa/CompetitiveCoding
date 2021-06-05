#include <iostream>
#define fast                         \
    ios_base::sync_with_stdio(NULL); \
    cin.tie(0);
#define fo(i, n) for (int i = 0; i < n; i++)
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int dist = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            dist += 2;
        else
            dist += 1;
    }
    int Q;
    if (n != 1)
        fo(i, k)
        {
            cin >> Q;
            s[Q - 1] = s[Q - 1] == '1' ? '0' : '1';
            if (Q == 1)
            {
                if (s[Q - 1] == s[Q])
                    dist++;
                else
                    dist--;
            }
            else if (Q == n)
            {
                if (s[Q - 1] == s[Q - 2])
                    dist++;
                else
                    dist--;
            }
            else
            {
                if (s[Q - 1] == s[Q])
                    dist++;
                else
                    dist--;

                if (s[Q - 1] == s[Q - 2])
                    dist++;
                else
                    dist--;
            }

            cout << dist << "\n";
        }
    else
        fo(i, k)
        {
            cin >> Q;
            cout << 0 << "\n";
        }
}

int main(int argc, char const *argv[])
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
        // cout << "\n";
    }
    return 0;
}