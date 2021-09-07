#include <iostream>
#include <unordered_set>
using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t, c;
	string s;

	cin >> t;
	unordered_set<char> red, blue;
	while (t--)
	{
		c = 0;
		red.clear();
		blue.clear();
		cin >> s;
		for (char i : s)
		{
			if (red.find(i) == red.end())red.insert(i);
			else if (blue.find(i) == blue.end())blue.insert(i);
		}
		cout << ((red.size() + blue.size())>>1) << endl;
	}
	return 0;
}