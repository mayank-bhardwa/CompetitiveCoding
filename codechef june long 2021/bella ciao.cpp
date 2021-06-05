#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    int D, d, P, Q, n, k;
    long long money;
    while (t--)
    {
        cin >> D >> d >> P >> Q;
        n = D / d;
        k = D % d;
        money = (n * P * d) + d * Q * (n * (n - 1) / 2) + (P * k + (k * Q * n));
        cout << money << "\n";
    }
    return 0;
}