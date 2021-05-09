#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>> n;
        int count = 0;
        int arr[n];
        for(int i = 0 ; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i = 0 ; i  < n ; i++)
        {
            if(arr[i] <= i+1)
            {
                int c = (i+1)-arr[i];
                count = count+c;
            }
            else{
                break;
            }
        }
        if(count%2 == 0)
        {
            cout<<"Second"<<endl;
        }
        else
        {
            cout<<"First"<<endl;
        }
        
    }
	return 0;
}