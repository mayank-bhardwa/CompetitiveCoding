#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

template <typename t>
class SegTree
{
private:
    vector<t> ands;
    t size;
    void set(t i, t v, t x, t lx, t rx)
    {
        if (rx - lx == 1)
        {
            ands[x] = v;
            return;
        }
        t mid = (lx + rx) / 2;
        if (i < mid)
        {
            set(i, v, 2 * x + 1, lx, mid);
        }
        else
        {
            set(i, v, 2 * x + 2, mid, rx);
        }

        ands[x] = ands[2 * x + 1] & ands[2 * x + 2];
    }

    t getand(t l, t r, t x, t lx, t rx)
    {
        if (lx >= r || l >= rx)
            return 0;
        if (lx >= l && rx <= r)
            return ands[x];

        t m = (lx + rx) / 2;

        t lgetand = getand(l, r, 2 * x + 1, lx, m);
        t rgetand = getand(l, r, 2 * x + 2, m, rx);
        return lgetand & rgetand;
    }

public:
    SegTree(t n)
    {
        size = 1;
        while (size < n)
            size *= 2;
        ands.resize(size * 2, 4);
    }

    void set(t i, t v)
    {
        set(i, v, 0, 0, size);
    }

    long long getand(int l, int r) //calculate getand from i=l to i=r-1
    {
        return getand(l, r, 0, 0, size);
    }
};

ll getor(SegTree<ll> A, ll n)
{
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            ans = ans | A.getand(i, j + 1);
        }
    }
    return ans;
}

void solve()
{
    ll n, q;
    cin >> n >> q;
    SegTree<ll> A(n);
    ll v;
    for (ll i = 0; i < n; i++)
    {
        cin >> v;
        A.set(i, v);
    }
    ll x;
    // cout << getor(A, n) << endl;
    while (q--)
    {
        cin >> x >> v;
        // A.set(x, v);
        // cout << getor(A, n) << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
            cout << A.getand(i, j + 1) << " ";
    }
    cout << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
#endif
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}