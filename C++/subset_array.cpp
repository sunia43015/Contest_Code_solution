#include <bits/stdc++.h>
using namespace std;

int m_subset(int arr[], int n) {
    int maxSum = arr[0];  
    int currentSum = arr[0];  

    for (int i = 1; i < n; i++) {
        currentSum = max(arr[i], currentSum + arr[i]); 
        maxSum = max(maxSum, currentSum);  
    }

    return maxSum;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
   int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout <<m_subset(arr, n) << endl;
    }
    return 0;
}
