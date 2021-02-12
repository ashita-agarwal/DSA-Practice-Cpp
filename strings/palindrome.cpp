#include <iostream>
using namespace std;
int main() {
   char a[]="madam";
   int i,j;
   int len;
   for(len=1;a[len]!='\0';len++){}
   i=0;
   j=len-1;
   while(i<j){
       if(a[i]!=a[j]){
           cout<<"not a palindrome";
           break;
       }
       i++;
       j--;


   }
   if(i>=j){
       cout<<"palindrome";
   }
    return 0;
}
