#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    //size of array
    int n;
    cin>>n;
    //int array
    int* arr=new int[n]; //dma
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    //we are assuming no of even = odd elements
    vector<int> even;
    vector<int> odd;

    for(int i=0;i<n;i++){
        //pushing odd even no in vectors
        if(arr[i]%2==0){
            even.push_back(arr[i]);
        }else{
            odd.push_back(arr[i]);
        }
    }
    //if smallest elem is odd ...odd even pattern 
    //if even ..even odd pattern

    bool evenFlag=false; //will help to alter btw odd and even vector
    
    if(arr[0]%2==0){
        //even odd pattern
        evenFlag=true; //or evenFlag = !evenFlag
    }else{
        //print odd-evn pattern
    }

    int i=0,j=0;

    for(int k=0;k<n;k++){
        if(evenFlag){ //if bool is true
        //even odd pattern
            arr[k]= even[i];
            i++;
            evenFlag=false;
        }else{
            //odd even pattern
            arr[k]=odd[j];
            j++;
            evenFlag=true;
        }
    }

    //print the pattern-->reconstruct the org arr
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}
