#include <iostream>
using namespace std;

void sum(int a ,int b){ //void--doesnt return anything,only need to print value
    cout<<"sum: "<<a+b<<endl;
}

//return back the value of sum --int fn()
int sum1(int x,int y){
    int ans=x+y;
    return ans; //return type is int type --same of fn 
    //or return(x+y);
}
int main() {
    int a,b;
    cin>>a>>b;
    sum(a,b); //invoke sum function
    //sum(10,20);
    int result=sum1(a,b);
    cout<<"inside main: "<<result<<endl;

    return 0;
}
