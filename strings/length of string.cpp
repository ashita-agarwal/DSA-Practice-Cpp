#include <iostream>
using namespace std;
int main() {
   char a[100]="Hello world"; //string in double quotes
   //h e l l o ' ' w o r l d '\n' //null gets append at last on its own
    cout<<a<<endl;
    //we can initialise char by char
    char b[]={'H','e','l','l','o','\0'};
    cout<<b<<endl;
    //to find the length
    int i;
    for(i=0;a[i]!='\0';i++){}
    cout<<"length: "<<i<<endl;
    return 0;
}
