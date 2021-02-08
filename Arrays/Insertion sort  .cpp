#include <iostream>
using namespace std;
int main() {
    int arr[]={4,5,3,2,1};
    int n =sizeof(arr)/sizeof(int); //number of buckets
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //insertion sort
    for (int i=1;i<=n;i++){
       int hand=arr[i]; //take one vale  from unsorted value  in hand 
       int j;
        for( j=i-1;j>=0 and arr[j]>hand;j--){ 

            
               arr[j+1]=arr[j];
                               
            
            
        } arr[j+1]=hand;
         
    }
    
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
