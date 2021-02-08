#include <iostream>
using namespace std;
int main() {
    int arr[]={5,4,3,2,1,-1,9,2};
    int n =sizeof(arr)/sizeof(int); //number of buckets
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //selection sort
    for (int i=0;i<=n-2;i++){
        int min=i; //take first value as min for every iteration
        for(int j=i+1;j<=n-1;j++){ //find min in the rest 
            if(arr[j]<arr[min]){  
               min=j;
                               
            }
            swap(arr[min], arr[i]); //put min value to org pos
        } 
         
    }
    
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
