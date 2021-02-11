#include <iostream>
using namespace std;
int main() {
    int n;//no of elem in 1st array
    cin>>n;
    int one[1005];
    for(int i=0;i<n;i++){
        cin>>one[i];
    }
    int m;//no of elem  in 2nd array
    cin>>m;
    int two[1005]; //size of array given in ques
    for(int i=0;i<m;i++){
        cin>>two[i];
    }
    int carry=0;
    int i=n-1;
    int j=m-1; //initial value 

    //third array where sumArray will b stored
    //but size we dont know ,so left elemnt willl b printed at first 
    //afterwards we will reverse print

    int third[10000]; //sumArray
    int k=0; //index of third array
    while(i>=0 || j>=0){
        int sum=carry;
        if(i>=0){
            sum=sum+one[i];
        }
        if(j>=0){
            sum=sum+two[j];
        }
        int rem=sum%10; //to extract one's place of sum
        //rem shud be at kth index of third array
        third[k]=rem;
        k++; //next index
        carry=sum/10;  //other digits of sum than one's place is carry
        i--;
        j--; 
    }
    // if(carry!=0){
        while(carry!=0){
            third[k]=carry%10;
            k++; //next index
            carry=carry/10;
        }
    // }
    for(int l=k-1;l>=0;l--){
        cout<<third[l]<<", ";
    }
    cout<<"END"<<endl;
    return 0;
}
