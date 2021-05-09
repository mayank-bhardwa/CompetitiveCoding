/*
	You are given two arrays of integers a1,…,an and b1,…,bm.
	Your task is to find a non-empty array c1,…,ck that is a 
	subsequence of a1,…,an, and also a subsequence of b1,…,bm.
	If there are multiple answers, find one of the smallest 
	possible length. If there are still multiple of the smallest
	possible length, find any. If there are no such arrays, you
	should report about it.
*/
#include <iostream>
#include <algorithm>
#define fo(i,n) for (int i = 0; i < n; ++i)
 
using namespace std;

void solve();

int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;
        cin>>t;
        while(t--)solve();
	return 0;
}

void solve()
{
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	fo(i,n)cin>>a[i];
	fo(i,m)cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	int i=0,j=0;
	while(i<n and j<m)
	{
		if(a[i]==b[j])
		{
			cout<<"YES\n1 "<<a[i]<<"\n";
			return ;
		}
		else if(a[i]<b[j])
		{
			i++;
		}
		else{
			j++;
		}
	}
	cout<<"NO\n";  
}	