#include<bits/stdc++.h>
using namespace std;

int t_z(int n) {
    int count = 0;
    for (long long i = 5; i <= n; i *= 5) {
        count += n / i;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << t_z(n) << endl;
    return 0;
}
