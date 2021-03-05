#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isPrime;
    for(int i=1;i<=n;i++){ //every number will b checked till N
            if(i==0 || i==1){
                continue;
            }
            isPrime=true;
            for(int j=2;j<=i/2;j++){
                if(i%j==0){
                    isPrime=false;
                    break;
                }
                
            }
           if(isPrime==true){
            cout<<i<<" ";
        }
        
         
        
    }
return 0;
}
