#include<iostream>
using namespace std;
int main(){
   int n1,n2,cnt=1,i=1,s;
   cin>>n1>>n2;
   while(cnt<=n1){
       s=3*i+2;
       if(s%n2!=0){
           cout<<s<<endl;
           cnt++;
       }
       i++;
   }
    
    
    return 0; 
}