#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t; // Number of Test Cases
    while(t--) {
        vector<string> grid(8); // Store 8 lines
        string result = "";    // Store final word
        
        // Take 8×8 grid input
        for(int i = 0; i < 8; i++) {
            cin >> grid[i];
        }
        
        // Loop through each column
        for(int j = 0; j < 8; j++) {
            for(int i = 0; i < 8; i++) {
                if(grid[i][j] != '.') {  // If letter is found
                    result += grid[i][j];  // Add letter to result
                }
            }
        }
        
        cout << result << endl; // Print the final word
    }
    
    return 0;
}
