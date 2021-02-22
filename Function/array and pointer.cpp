#include <iostream>
using namespace std;

//*arr or arr will work fine -->bcz array are passed by reference
void Print(int *arr,int n){
    //sizeof(arr): 8bytes ,bcz arr is a pointer
    for(int i=0;i<n;i++){
        //cout<<arr[i]<<" ";
        cout<<*(arr+i)<<" "; //arr+1 , arr is address of 0th index+1=next index's address
    }
    cout<<endl;
}

int main(){
    int a[]={1,2,3,4,5,6,7,8,10,12};
    int n =sizeof(a)/sizeof(int); //40 bytes/4=10

    
    Print(a,n); //a denotes the address of 0th index
    cout<<endl;
    return 0;
}
