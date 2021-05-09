#include<bits/stdc++.h>
#define ll long
using namespace std;

void fast()
{
    std::ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif*/
}

void fastscan(ll &number) 
{
    bool negative = false; 
    register ll c; 
  
    number = 0; 

    c = getchar(); 
    if (c=='-') 
    {  
        negative = true; 

        c = getchar(); 
    } 
  

    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 

    if (negative) 
        number *= -1; 
} 

ll binary_srch(vector<ll> arr,ll e)
{
    ll mid,low=0,high=arr.size()-1;
        while(low<=high)
        {
            mid=(low+high)>>1;
            if(arr[mid]==e)
            {
                return mid;
            }
            if(e>arr[mid])
            {
                if(arr[mid]*2 >=e) return mid;
                high=--mid;
            }
            else{
                low=++mid;
            }
        }
    return -1;
}

void solve()
{
    ll n,x,day=0,k;
    bool flag;
    fastscan(n);
    fastscan(x);
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        fastscan(a[i]);
    }
    sort(a.begin(),a.end(),greater<ll>());
    while(!a.empty())
    {
        day++;
        if(a[0] <=x)
        {
            day+=a.size()-1;
            a.clear();
            /*x=a[0]*2;
            a.erase(a.begin());*/
        }
        else{
            k=-1;
            if(a[a.size()-1]<=x)k=binary_srch(a,x);
            if(k!=-1)
            {
                x=a[k]*2;
                a.erase(a.begin()+k);
            }
            else{
                if(*a.begin()>>1 >=x)
                {
                    x*=2;
                }
                else{
                    *a.begin()=min(*a.begin(),(*a.begin()-x)*2);
                    x*=2;
                    if(*a.begin()*2 <= x)
                    {
                        for(int i=1;i<a.size();i++)
                        {
                            if(a[i-1]<a[i])
                            {
                                swap(a[i],a[i-1]);
                            }
                            else{
                                break;
                            }
                        }
                    }
                }
            }
        }
    }

    printf("%ld\n",day);
}

int main()
{
    fast();
    ll t;
    fastscan(t);
    while(t--)solve();
    return 0;
}