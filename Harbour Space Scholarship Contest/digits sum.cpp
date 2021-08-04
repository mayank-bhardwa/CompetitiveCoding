#include <iostream>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	cout << int( (n + 1) / 10);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		solve();
		cout << endl;
	}
	return 0;
}