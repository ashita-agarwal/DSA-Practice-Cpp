#include <iostream>
using namespace std;
int main() {
    char a[100]="Coding";
    int len=6;
    
    int k; //k will not exceed n
    cin>>k;
    int i=len-1;
    //shift the string k char ahead
    while(i>=0){
        a[i+k]=a[i];
        i--;
    }
    //shift last k char to front
     i=0;
    int j=len;
    while(j<len+k){
        a[i++]=a[j++];
    }
    //insert null at the end 
    a[len]='\0';
    cout<<a<<endl;
    return 0;
}
