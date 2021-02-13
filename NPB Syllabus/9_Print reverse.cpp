#include<iostream>
#include<cmath>

using namespace std;
int main(){
   int n ,s=0;
   cin>>n;
   while(n>0){
        s*=10;
        s=s+(n%10);
      
        n=n/10;
       
   }cout<<s<<endl;
    
    return 0; 
}