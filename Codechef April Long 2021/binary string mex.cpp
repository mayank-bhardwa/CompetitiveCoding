#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (count(s.begin(), s.end(), '0') == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if (count(s.begin(), s.end(), '1') == 0)
        {
            cout << 1 << endl;
            continue;
        }

        int n = s.length(), cnt = 0;
        vector<string> bs(n + 1);
        bs[n] = "00";

        for (int i = n - 1; i >= 0; i--)
        {
            bs[i] = bs[i + 1];
            if (s[i] == '0')
            {
                bs[i][1] = '1';
            }
            else
            {
                bs[i][0] = '1';
            }
            if (bs[i] == "11")
                cnt++, bs[i] = "00";
        }
        string ans;
        bool fst = true;
        int cur = 0;
        if (bs[0][1] == '0' && bs[0][0] == '1')
        {
            ans = "1";
            fst = false;
        }

        cnt++;

        while (cnt--)
        {
            if (fst)
            {
                if (bs[0][0] == '0')
                {
                    ans.push_back('1');
                    while (cur < n && s[cur] != '1')
                        cur++;
                    cur++;
                }
                fst = false;
            }
            else
            {
                for (auto i : {1, 0})
                {
                    if (bs[cur][i] == '0')
                    {
                        char ch = '0' + 1 - i;
                        ans.push_back(ch);
                        while (cur < n && s[cur] != ch)
                            cur++;
                        cur++;
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}