#include <bits/stdc++.h>
using namespace std;
int fpaste(int n)
{
    int paste = 0, factor = 2;
    while (n > 1)
    {
        while (n % factor == 0)
        {
            paste = paste + factor - 1;
            n = n/factor;
        }
        factor++;
    }
    return paste;
}
int main()
{
    int t, n;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        cout << "Case " << i << ": " << fpaste(n) << endl;
    }
    return 0;
}