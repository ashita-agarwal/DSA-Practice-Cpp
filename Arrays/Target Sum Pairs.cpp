#include <iostream>
using namespace std;
int main() {
   int n,i;
    cin>>n;
    int arr[n]={};


    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    //insertion sort
    for (int i=1;i<=n;i++){
       int hand=arr[i]; //take one vale  from unsorted value  in hand 
       int j;
        for( j=i-1;j>=0 and arr[j]>hand;j--){ 

            
               arr[j+1]=arr[j];
                               
            
            
        } arr[j+1]=hand;
         
    }
    
    // for (int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    int left=0, right=n;
    while(left<right){
        if(arr[left]+arr[right]>target){
            right--;
        }else if(arr[left]+arr[right]<target){
            left++;
        }else{
            cout<<arr[left]<<" and "<<arr[right];
            
            left++;  //or right--;
            cout<<endl;
        }
    }
    return 0;
}
