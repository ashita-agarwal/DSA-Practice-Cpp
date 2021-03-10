#include <iostream>
using namespace std;
int main() {
       char a[100],b[100];
       cin.getline(a,100);
       cin.getline(b,100);
       int len;
       for(len=0;a[len]!='\0';len++){}
       int i=len,j=0;
       for(;b[j]!='\0';j++){
           a[i]=b[j];
           i++;
       }
       for(int i=0;a[i]!='\0';i++){
           cout<<a[i];
       }
       return 0;
}
