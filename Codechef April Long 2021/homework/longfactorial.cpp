#include <iostream>
#include <list>
using namespace std;

void factorial(list<int> *fact, int n)
{
    fact->push_front(1);
    for (int i = 2; i <= n; i++)
    {
        int carry = 0, temp = 1;
        for (auto itr = fact->rbegin(); itr != fact->rend(); itr++)
        {
            temp = (*itr) * i + carry;
            *itr = temp % 10;
            carry = temp / 10;
        }
        if (carry != 0)
        {
            while (carry != 0)
            {
                fact->push_front(carry % 10);
                carry /= 10;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    list<int> fact;
    factorial(&fact, n);

    for (auto itr : fact)
        cout << itr << " ";
    return 0;
}