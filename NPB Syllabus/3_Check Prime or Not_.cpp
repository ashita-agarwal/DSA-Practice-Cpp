#include<iostream>
using namespace std;
int main(){
    int N; //the number which is to be checked as prime or not
    cin>>N;
    bool isPrime =true;
    for(int i=2;i<N/2;i++){ //start from 2 and end at  N/2-1
        if(N%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }
    return 0; 
}