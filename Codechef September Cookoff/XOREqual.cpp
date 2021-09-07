#include <iostream>
#include <unordered_map>
using namespace std;

void solve()
{
	int n,x,t;
	cin>>n>>x;
	unordered_map<int,int> freq,freq2;
	for(int i=0;i<n;i++){
		cin>>t;
		freq[t]++;
		freq2[t^x]++;
	}

	int mxFreq = 1,minOp = 0;
	
	for(auto i : freq) {
		t = i.first ^ x;
		if(freq[t] + i.second > mxFreq && t != i.first){
			mxFreq = freq[t] + i.second;
			minOp = freq[t];
		}else if(freq[t] + i.second == mxFreq)minOp = min(minOp,freq[t]);
	}

	cout<<mxFreq<<" "<<minOp;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<"\n";
	}
	return 0;
}