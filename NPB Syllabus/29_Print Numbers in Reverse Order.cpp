#include <iostream>
using namespace std;
int main() {
    //reverse a number 
    int rev=0;
    int n;
    cin>>n;
    while(n>0){
            rev =(rev*10) + (n%10);
        n=n/10;
    }
    cout<<rev;
    return 0;
}
