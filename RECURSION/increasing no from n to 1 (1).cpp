#include <iostream>
using namespace std;
int isSorted(int *a,int n){
    //base case
    if (n==1 || n==0){
        return true;
    }
    //recursive case(assume)
   bool isChotaArraySorted= isSorted(a+1,n-1);

   if(isChotaArraySorted==true and a[0]<a[1]){
       return true;
   }else{
       return false;
   }
    
    
    
}
int main() {
    int a[]={1,4,5,0,8};
    int n=sizeof(a)/sizeof(int);

    if(isSorted(a,n)){
        cout<<"sorted"<<endl;
    }else{
        cout<<"not sorted"<<endl;
    }

    
   return 0;
}
