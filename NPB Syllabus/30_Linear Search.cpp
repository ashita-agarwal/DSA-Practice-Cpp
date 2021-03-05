#include<iostream>
using namespace std;
int main(){
      int n,K;
      cin>>n>>K; //size of array and key k
        //create array
        int a[n]={};
      //enter all values of array
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      //linear search , traversal thru each element 
      for(int i=0;i<n;i++){
          if(a[i]==K){
              cout<<" key found at i= "<<i;
              break;
          }
      }
return 0;
}