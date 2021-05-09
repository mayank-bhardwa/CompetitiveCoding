#include <iostream>
#include <algorithm>
using namespace std ;

int remove_duplicates(long int a[], long int temp1){
    if (temp1 == 0 || temp1 == 1)
        return  temp1 ;

    long int temp2[temp1];
    long int j = 0 ;
    for (long int i = 0; i < temp1 - 1; ++i) {
        if (a[i] != a[i+1]){
            temp2[j++] = a[i];
        }
    }
    temp2[j++] = a[temp1 - 1];

    for (long int i = 0; i < j; ++i) {
        a[i] = temp2[i];
    }
    return  j ;
}


void solve()
{
    int n;
    cin>>n;
    
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    long int t ;
    cin >> t ;
    while (t--){
        solve();
        cout<<"\n";
    }
    return 0 ;
}