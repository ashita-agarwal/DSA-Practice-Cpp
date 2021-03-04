#include <iostream>
using namespace std;
int main() {
    //square matrix-->equal row n col
    int n,arr[100][100];
    cin>>n;
    //since rows=cols 
    int rows=n,cols=n;
    //input the 2D array
    for(int i=0;i<rows;++i){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    //before transpose
    cout<<"before transpose"<<endl;
    for(int i=0;i<rows;++i){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //transpose
    for(int i=0;i<rows;++i){
        for(int j=0;j<cols;j++){
            if(i<j){ //to avoid double swapping 
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
    //result matrix
    cout<<"after transpose"<<endl;
    for(int i=0;i<rows;++i){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
   return 0;
}
