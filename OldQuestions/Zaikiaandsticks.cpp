#include<iostream>
#include<algorithm>
#define fo(i,a) for(int i=0;i<a;i++)


using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int n;
    cin>>n;
    int *a = new int[n];
    fo(i,n)cin>>a[i];
    sort(a,a+n,greater<int>());
    fo(i,n-2)
    {
        if(a[i]<(a[i+1]+a[i+2]))
        {
            cout<<"YES\n"<<a[i]<<" "<<a[i+1]<<" "<<a[i+2];
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}