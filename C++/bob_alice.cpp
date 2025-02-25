#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string n;
    cin >> n;
    int count0 = 0, count1 = 0;
    for (char c : n)
    {
        if (c=='0')
        {
            count0++;
        }
            else
            {
                count1++;
            }
        
    }
    int moves=min(count0,count1);
    if(moves%2==1){
cout<<"DA"<<endl;
    }
    else{
        cout<<"NET"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}