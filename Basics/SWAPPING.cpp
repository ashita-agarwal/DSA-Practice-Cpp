#include<iostream>
using namespace std;
int main(){
    //creating a third variable
    // int a,b,temp;
    // a=2;
    // b=3;
    // temp=a;
    // a=b;
    // b=temp;

    // cout<<a<<" "<<b<<" "<<endl;

    //without using third variable
    // int a=2,b=3;
    // a=a+b; //5
    // b=a-b; //5-3=2 
    // a=a-b;
    // cout<<a<<" "<<b<<endl;

    //store multiply val
    // int a=2,b=3;
    // a=a*b; //6
    // b=a/b; //b=2
    // a=a/b; //a=3
    // cout<<a<<" "<<b<<endl;

    //another way
    int a=3,b=4;
    a=(a+b)-(b=a); //assign value of a to b and then a 's value is changed
    //we have assigned a to b 
    //and a+b-a is b 
    //bcz +,- have more precedence value than = so b is considered
    cout<<a<<" "<<b<<endl;


    return 0;
}