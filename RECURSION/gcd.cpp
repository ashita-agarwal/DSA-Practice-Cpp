#include <iostream>
using namespace std;
int gcd(int a,int b){
//base case
   if(b==0){
       return a;
   }
//recursive case
   return gcd(b,a%b);
}
int main() {
   int a,b;
   cin>>a>>b;
   cout<<gcd(a,b);
   return 0;
}
