#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	unordered_set<int> a;
	a.insert(1);
	a.insert(2);
	a.insert(1);
	for(auto i:a)cout<<i<<" ";
	return 0;
}