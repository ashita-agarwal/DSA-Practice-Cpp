#include <iostream>
using namespace std;
int f(int x,int n){
    //base case
    if ( n==0){
        return 1;
    }
    //recursive case(assume)
   
       return x*f(x,n-1);
}
int main() {
   cout<<f(2,4);
    
   return 0;
}
