#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t, n, k, c1, c2;
	cin >> t;
	while (t--)
	{
		cin >> n;
		k = n / 3;
		if (n % 3 == 0)cout << k << " " << k << endl;
		else if (n % 3 == 1)cout << k + 1 << " " << k << endl;
		else cout << k << " " << k + 1 << endl;
	}
	return 0;
}