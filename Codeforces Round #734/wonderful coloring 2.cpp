#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t, n, k, d, c, i;
	cin >> t;
	while (t--)
	{
		c = 0;
		cin >> n >> k;
		unordered_map<int, vector<int>> items;
		vector<int> result(n, 0);

		for (int z = 0; z < n; z++)
		{
			cin >> result[z];
			items[result[z]].emplace_back(z);
		}

		vector<int> colors(k + 1);
		int i;
		for (auto index : items)
		{
			for (i = 0; i < items.size() && i<k;i++)
			{
				
			}
		}
	}
	return 0;
}