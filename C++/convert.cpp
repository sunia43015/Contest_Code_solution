#include<bits/stdc++.h>
using namespace std;

void deci_c(int n)
{
    if (n == 0)
        return;
    deci_c(n / 3);
    cout << (n % 3);
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (n < 0)
        {
            break;
        }

        if (n == 0)
        {
            cout << "0"; 
        }
        else
        {
            deci_c(n); 
        }

        cout << endl; 
    }

    return 0;
}
