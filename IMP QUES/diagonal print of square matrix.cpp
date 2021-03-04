#include <iostream>

using namespace std;
int main() {
   
    int arr[100][100];
    int n;
    cin>>n;
    int rows,cols;
    rows=cols=n;
    
    
    //input the 2D array
    for(int i=0;i<rows;++i){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Principal diagonal "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i==j){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    
    cout<<"secondary diagonal "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i+j==n-1){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    
    
   return 0;
}
