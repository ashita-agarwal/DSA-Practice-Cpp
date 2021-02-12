#include <iostream>
using namespace std;
int main() {
    char a[100]="hello";
    char b[100]="world";
    int lena,lenb,i,j;
    for(lena=0;a[lena]!='\0';lena++){}
    for(lenb=0;a[lenb]!='\0';lenb++){}

   i=lena;j=0;
   while(j<=lenb){
       a[i++]=b[j++];

   }
   cout<<a;
    return 0;
}
