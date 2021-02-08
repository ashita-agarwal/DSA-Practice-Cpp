#include <iostream>
using namespace std;
int main() {
    int arr[]={5,4,3,2,1,-1,9,2};
    int n =sizeof(arr)/sizeof(int); //number of buckets
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //bubble sort
    for (int i=0;i<=n-2;i++){
        for(int j=0;j<=n-2-i;j++){
            if(arr[j]>arr[j+1]){
                //swapping 1st way
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;

                //swapping 2nd way
                // arr[j]=arr[j]+arr[j+1];
                // arr[j+1]=arr[j]-arr[j+1];
                // arr[j]=arr[j]-arr[j+1];

                //swapping 3rd way
                arr[j]=(arr[j]+arr[j+1])-(arr[j+1]=arr[j]);

                
            }
        } 
    }
    
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
