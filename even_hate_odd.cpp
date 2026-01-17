#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int odd_count = 0, even_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] % 2 == 0 ? even_count++ : odd_count++;
        }
        if (n % 2 == 0)
        {
            // cout << odd_count << " " << even_count;
             
            if (odd_count > even_count)
            {
               int dif = odd_count - even_count;
for (int i = 0; i < dif / 2; i++)
{
    /* code */
}

            }
            else
            {
                dif = even_count - odd_count;
            }
            cout << dif;
        }
        else
        {
            cout << -1;
        }
        cout << endl;
    }

    return 0;
}