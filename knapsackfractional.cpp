/*
    Created By : Mayank Bhardwaj
    C++ program to find maximum profit
    an implementation of fractional 
    knapsack 
*/
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

double maxProfit(vector<pair<int,int>> objects, int capacity)
{
    sort(objects.begin() , objects.end(),
            [](auto a,auto b){
                return ((double)a.first/a.second)
                     > ((double)b.first/b.second) ;} );
    double profit=0;
    auto it = objects.begin();
    while(it!=objects.end() || capacity>0)
    {
        if( (*it).second <= capacity )
        {
            profit += (*it).first;
           capacity -= (*it).second;
        }
        else
        {
            profit += ((double)(*it).first/(*it).second) * capacity;
            capacity=0;
        }
        it++;
    }

    return profit;           
}

int main()
{
    int n,capacity;
    cout << "Enter number of objects :";
    cin >> n;
    vector<pair<int,int>> objects(n);
    for(int i=0;i<n;i++)
    {
        cout << "\nEnter profit and weight of object " <<i+1 <<": ";
        cin>>objects[i].first >> objects[i].second;
    }     

    cout << "Enter capacity of knapsack ";
    cin >> capacity;
    cout<<"\nMax Profit :"<<maxProfit(objects,capacity);

    return 0;
}