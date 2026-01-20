#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, x;
    getline(cin, s);
    cin >> x;

    int count_john = 0;
    stringstream ss(s);
    string wordn;
    // cout << x << endl;
    while (ss >> wordn)
    {
        if (wordn == x)
            count_john++;
    }

    cout << count_john;
    return 0;
}