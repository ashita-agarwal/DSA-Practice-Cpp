#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    float si;

    cin>>p>>r>>t;
    //si=(p*r*t)/100; //int/int = int 
    //si will not convert int into float 
    //but it can store float values

    //precedence---float>int>char>bool

    si=(p*r*t)/100.0; //int/float=float 

    cout<<si;
    return 0;
}