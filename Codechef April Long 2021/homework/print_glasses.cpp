/*
Program to fill water in bucket arrange in order with same capacity
     *
   * * *
  * * * *
 * * * * *
    1
    1 1 
    1 1 1
    0 .5 .5 0
*/
#include <iostream>
#include <vector>
#define deb(x) cout << #x << " " << x << endl
using namespace std;

struct Bucket
{
    // Amount flowing from each side and water retained in the bucket
    float outlet, con;

    Bucket()
    {
        outlet = 0;
        con = 0;
    }

    // Function to fill the bucket and calculate left
    void update(float inlet, float cap)
    {
        if (inlet <= cap)
        {
            this->con = inlet;
            outlet = 0;
        }
        else
        {
            this->con = cap;
            inlet = inlet - cap;
            this->outlet = inlet / 2;
        }
    }
};

int main()
{
    int n = 17, cap = 2, size = 0;
    vector<vector<Bucket>> pattern;
    pattern.push_back(vector<Bucket>(size + 1));

    pattern[size][0].update(n, cap);

    bool status = pattern[size][0].outlet > 0 ? true : false;
    while (status)
    {
        status = false;
        size++;
        vector<Bucket> line(size + 1);
        int i = 0;

        // Handle the case when outlet is only has one parent for outlet
        line[i].update(pattern[size - 1][i].outlet, cap);
        status = line[i].outlet > 0 ? true : status;

        for (i = 1; i < size; i++)
        {
            line[i].update(pattern[size - 1][i].outlet + pattern[size - 1][i - 1].outlet, cap);
            status = line[i].outlet > 0 ? true : status;
        }

        // Handle the case when outlet is only has one parent for outlet
        line[i].update(pattern[size - 1][i - 1].outlet, cap);
        status = line[i].outlet > 0 ? true : status;

        pattern.push_back(line);
    }

    // Print the pattern stored in vector pattern
    for (auto outer : pattern)
    {
        for (auto inner : outer)
        {
            cout << inner.con << " ";
        }
        cout << endl;
    }

    return 0;
}