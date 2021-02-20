#include <iostream>
using namespace std;

void prime(int n){
     bool isPrime = true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if (isPrime){
        cout<<"Prime"<<endl;
    }else{
        cout<<"not prime"<<endl;
    }
}
bool checkPrime(int n){ //returns bool value to whosover called the fn
    bool isPrime = true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            // isPrime=false;
            //break;
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    prime(n);
   bool ans=checkPrime(n);
   if(ans==true){
       cout<<"helloworld";
   }else{
       cout<<"coding blocks";
   }
    return 0;
}
