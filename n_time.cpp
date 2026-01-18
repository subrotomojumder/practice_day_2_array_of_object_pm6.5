#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string s = string(n, c);
        cout << s[0];
        for (int i = 1; i < n; i++)
        {
            cout << ' ' << s[i];
        }
        cout << endl;
    }

    return 0;
}