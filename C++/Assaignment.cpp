#include <iostream>
using namespace std;

int main() {
    int n = 4; 
    int process[] = {1, 2, 3, 4};
    int arrival[] = {0, 1, 5, 6};
    int burst[] = {2, 2, 3, 4};
    int completion[] = {2, 4, 8, 12};
    int tat[n], wt[n], rt[n];
    float avg_tat = 0, avg_wt = 0, throughput;
    for (int i = 0; i < n; i++) {
        tat[i] = completion[i] - arrival[i];   
        wt[i] = tat[i] - burst[i];            
        rt[i] = wt[i];                        
        
        avg_tat += tat[i];
        avg_wt += wt[i];
    }

    throughput = (float)n / completion[n - 1];

    
    cout << "Process\tArrival\tBurst\tCompletion\tTAT\tWT\tRT\n";
    for (int i = 0; i < n; i++) {
        cout << process[i] << "\t" << arrival[i] << "\t" << burst[i] << "\t" 
             << completion[i] << "\t\t" << tat[i] << "\t" << wt[i] << "\t" << rt[i] << endl;
    }

    cout << "\nAverage Turnaround Time: " << avg_tat / n << endl;
    cout << "Average Waiting Time: " << avg_wt / n << endl;
    cout << "Throughput: " << throughput << " processes/unit time" << endl;

    return 0;
}
