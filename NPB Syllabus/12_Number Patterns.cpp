#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n; //no of rows
   
   for(int i=1;i<=n;i++){
       
       int val=i;
       for(int j=1;j<=n;j++){
        if(j<i){
            cout<<val<<" ";
        }else{
            
            cout<<val<<" ";
            val++;
        }
       }cout<<endl;
       
   }

return 0;
}