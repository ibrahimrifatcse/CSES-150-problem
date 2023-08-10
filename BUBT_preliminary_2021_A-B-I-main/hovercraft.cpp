#include <bits/stdc++.h>
using namespace std;
#define optimize() io_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

int main()
{
    int i, T, n;

    float a, b, c, d;

    while (cin >> a >> b)
    {
        if ((a != 0) && (b != 0))
        {

            d = a / 4;
            c = (a + b) - d;
            cout << fixed << setprecision(4) << c << '\n';
        }
        else
        {
            break;
        }
    }
    return 0;
}
