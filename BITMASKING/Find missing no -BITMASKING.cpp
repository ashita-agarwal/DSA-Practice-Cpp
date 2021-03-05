#include<iostream>
using namespace std;
int main(){
       int n,no;
       int exp1=0,exp2=0;
       cin>>n;

       for(int i=1;i<n;i++){ //one no is missing
           cin>>no;
           exp1^=no; //XOR of every number given by user
       }

       for(int i=1;i<=n;i++){
           exp2^=i;
       }
        cout<<(exp1^exp2)<<endl;
    
return 0;
}