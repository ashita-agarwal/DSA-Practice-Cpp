#include<iostream>
using namespace std;
int main(){
    
    char ch;//store a single char from the input
    int cnt=0;

    //cin>>ch; //bcz we cnt compare garbage value to valid value
    //cin ignores white space char ,/n,tab /t," "  but cin.get doesn't
    ch=cin.get(); // to take input as white space
    while(ch!='$'){
        cnt++;
        cin>>ch; //reads the next char
    }
    cout<<"total characters "<<cnt;
    cout<<endl;

    return 0;
}