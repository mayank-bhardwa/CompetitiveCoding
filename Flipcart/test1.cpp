#include <bits/stdc++.h>
using namespace std;

long long solve(int V,int E,vector<int> Values,vector<vector<int>> Edges)
{
	cout<<"hello";
	return 0;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int V = 7, E = 4 ;
	vector<int> Values = {10, 25, 5, 15, 5, 20, 0} ;
	vector<vector<int>> Edges={ {1,2} ,{3,4}, {4,5} ,{6,7} };
	cout<<solve(V,E,Values,Edges);
	return 0;
}