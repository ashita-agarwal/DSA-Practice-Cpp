#include <iostream>
using namespace std;
int main() {
    char str[100];
    char ch;
    int i;
    cin.getline(str,100);
    for( i=0;ch!='$';){
        i++; //first count then proceed
        ch=str[i];
       
    }
    cout<<i;
    return 0;
}
