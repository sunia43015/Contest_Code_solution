#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
   double r;
    cin>>r;
    double area1=2*r*2*r;
  double area2=2 * acos (0.0)*r*r;
  double d=area1-area2;
  cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<d<<'\n';
    } 

    return 0;
}