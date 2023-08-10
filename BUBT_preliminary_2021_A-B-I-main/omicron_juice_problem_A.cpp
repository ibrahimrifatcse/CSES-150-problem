#include <bits/stdc++.h>
using namespace std;
#define optimize() io_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);\\for first input output

int main()
{
    int a, b, c;

    int i, T, n;
    cin >> T;
    for (i = 1; i <= T; i++)
    {
        cin >> a >> b >> c;
        int x = a + b + c;
        if (x % 3 == 0)
        {
            cout << "Case " << i << ": "
                 << "Peaceful"
                 << "\n";
        }
        else
            cout << "Case " << i << ": "
                 << "Fight"
                 << "\n";
    }

    return 0;
}
