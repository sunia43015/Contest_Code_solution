#include<iostream>
using namespace std;

void number(long long num) {
    if (num < 10) {  
        cout << num << " ";
        return;
    }
    number(num / 10); 
    cout << num % 10 << " "; 
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;

        if (n == 0) {
            cout << "0";  
        }
        else {
            number(n);
        }
        
        cout << '\n';  
    }
    return 0;
}
