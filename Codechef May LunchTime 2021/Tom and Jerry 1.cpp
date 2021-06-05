#include <iostream>
#define fast                         \
	ios_base::sync_with_stdio(NULL); \
	cin.tie(0);

using namespace std;

void solve()
{
	int a, b, c, d, K;
	cin >> a >> b >> c >> d >> K;
	int m = abs(c - a) + abs(d - b);

	if (m == K)
		cout << "YES";
	else if (m > K)
		cout << "NO";
	else
	{
		K -= m;
		if (K & 1)
			cout << "NO";
		else
			cout << "YES";
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
		cout << "\n";
	}
	return 0;
}