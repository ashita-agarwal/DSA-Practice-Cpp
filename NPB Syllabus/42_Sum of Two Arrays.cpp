#include <iostream>

using namespace std;
int main() {
     int a[1000],b[1000];
     int n,m;
     cin>>n;
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     cin>>m;
     for(int i=0;i<m;i++){
         cin>>b[i];
     }
     int i=n-1;
     int j=m-1;
     int carry=0;
     int k=0; //index of third array
     int c[10000];
     while(i>=0 or j>=0){
         int sum=carry;
         if(i>=0){
             sum=sum+a[i];
         }
         if(j>=0){
             sum+=b[j];
         }
         int rem=sum%10; //unit digit stored in array 
        c[k]=rem;
        k++;
        carry=sum/10;
        i--;
        j--;
         
     }
     //if carry is left and more than one digit
     while(carry){
         c[k]=carry%10;
         k++;
         carry=carry/10;
     }
     //sum array to be printed in reverse
     for(int l=k-1;l>=0;l--){
         cout<<c[l];
     }
     
       return 0;
}
