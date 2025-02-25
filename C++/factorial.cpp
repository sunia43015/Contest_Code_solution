#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
    cin>>n;
    long long mul=1;
    for(int i=1;i<=n;i++){
        mul=mul*i;
        
    }
    cout<<mul<<endl;
}
    
    return 0;
}