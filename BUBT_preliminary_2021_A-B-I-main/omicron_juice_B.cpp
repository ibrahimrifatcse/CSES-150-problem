#include <bits/stdc++.h>
using namespace std;
#define optimize() io_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

int main()
{
    int A, B, C, K, i, n, T;

    cin >> T;
    for (i = 1; i <= T; i++)
    {
        cin >> A >> B >> C >> K;
        n = A + B + C;
        int z = n / 3;
        if (n % 3 != 0)
        {
            cout << "Case " << i << ": "
                 << "Fight"
                 << "\n";
            continue;
        }
        if (abs(A - z) % K == 0 && abs(B - z) % K == 0 && abs(C - z) % K == 0)
        {
            cout << "Case " << i << ": "
                 << "Peaceful"
                 << "\n";
            continue;
        }
        else
        {
            cout << "Case " << i << ": "
                 << "Fight"
                 << "\n";
            continue;
        }
    }
    return 0;
}
