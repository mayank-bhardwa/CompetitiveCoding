#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        char arr[3][3];
        int cx = 0, co = 0, c_ = 0, winx = 0, wino = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];

                if (arr[i][j] == 'X')
                    cx++;
                else if (arr[i][j] == 'O')
                    co++;
                else
                    c_++;
            }
        }

        if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X')
            winx++;
        if (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X')
            winx++;
        if (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X')
            winx++;
        if (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X')
            winx++;
        if (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X')
            winx++;
        if (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X')
            winx++;
        if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X')
            winx++;
        if (arr[2][0] == 'X' && arr[1][1] == 'X' && arr[0][2] == 'X')
            winx++;

        if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O')
            wino++;
        if (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O')
            wino++;
        if (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O')
            wino++;
        if (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O')
            wino++;
        if (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O')
            wino++;
        if (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O')
            wino++;
        if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O')
            wino++;
        if (arr[2][0] == 'O' && arr[1][1] == 'O' && arr[0][2] == 'O')
            wino++;

        if ((wino == 1 && winx == 1) || co > cx || cx - co > 1)
            cout << 3 << endl;
        else if (wino == 1 && winx == 0 && co == cx)
            cout << 1 << endl;
        else if (winx == 1 && wino == 0 && co < cx)
            cout << 1 << endl;
        else if (winx == 2 && c_ == 0)
            cout << 1 << endl;
        else if ((winx + wino == 0) && c_ == 0)
            cout << 1 << endl;
        else if ((winx + wino == 0) && c_ > 0)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}