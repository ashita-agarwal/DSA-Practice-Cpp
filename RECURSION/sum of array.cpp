#include <iostream>
using namespace std;
int sum(int *a,int n){
    //base case
    if ( n==0){
        return 0;
    }
    //recursive case(assume)
   
       //return a[0]+sum(a+1,n-1);
       //OR
       return a[n-1]+sum(a,n-1);
}
int sum2(int *a,int n,int i){
    if(i==n){
        return 0;
    }
    return sum2(a,n,i+1)+a[i];
}
int main() {
    
    int a[]={1,2,3,4,5,10};
    int n=sizeof(a)/sizeof(int);
   cout<<sum(a,n)<<" "<<sum2(a,n,0);
    
   return 0;
}
