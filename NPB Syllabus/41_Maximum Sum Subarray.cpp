#include <iostream>
using namespace std;
int main() {
   //kadane's algorithm
   //find max sum subarray-->subarray are part of array with consecutive elements 
   int a[100005],i;
   int n;
   cin>>n;
    int cS=0,ms=0; //current sum till here and max sum so far
    for(i=0;i<n;i++){
         cin>>a[i];
   
        cS+=a[i];
        if(cS<0){
            cS=0;
        }
        if(ms<cS){
            ms=cS;
        }
    }
    cout<<ms;
    return 0;
}
