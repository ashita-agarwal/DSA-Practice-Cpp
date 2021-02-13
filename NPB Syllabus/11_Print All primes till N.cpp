#include<iostream>
using namespace std;
int main(){
    int n; //print all prime till n
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%2!=0){
            cout<<i<<endl;
        }
    }
return 0;
}