#include<iostream>
using namespace std;
int main(){
    int n,rev=0;
    cin>>n;
    for(;n!=0;n=n/10)
    {
        rev=10*rev+(n%10);
    }
    cout<<rev<<endl;
    return 0;
}