#include<iostream>
using namespace std;
int main(){
    int N,n,sum=0;
    cin>>N; //how many numbers
    for(int i=0;i<N;i++){
        cin>>n; //no
        sum=sum+n;
    }
    int mean = sum/N;
    cout<<"Mean : "<<mean;
    return 0; 
}