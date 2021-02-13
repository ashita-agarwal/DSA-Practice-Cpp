#include<iostream>
#include<climits> //for INT_MAX and INT_MIN
using namespace std;
int main(){
    int N; //number of numbers to be taken
    cin>>N;
    int n; //where numbers will be stored
    int max=INT_MIN; //the minimum value of int can be -2^31 
    for(int i=0;i<N;i++){
        cin>>n; 
        if(max<n){
            max=n;
        }
    }
    cout<<max<<endl;
    return 0;
}