#include <iostream>
#include<climits>
using namespace std;
int main() {
   
    int arr[100][100];
    int rows,cols;
    cin>>rows>>cols;
    
    
    //input the 2D array
    for(int i=0;i<rows;++i){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    
    
    //taking sum of every col
    int maxsum=INT_MIN,rescolumn;
    for(int j=0;j<cols;j++){
        int sum=0; //everry col initial sum 0
        for(int i=0;i<rows;i++){
            sum=sum+arr[i][j];
        }
        if(sum>maxsum){
            rescolumn=j; 
            maxsum=sum;
        }
        //maxsum=max(sum,maxsum);
        
    }
    
    cout<<"max sum is "<<maxsum<<endl;
    cout<<"result col is "<<rescolumn<<endl;
   return 0;
}
