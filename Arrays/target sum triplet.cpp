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
    for(i=0;i<n;i++){
        int left=i+1, right=n-1;
        while(left<right){
            if(arr[i]+arr[left]+arr[right]>target){
                right--;
            }else if(arr[i]+arr[left]+arr[right]<target){
                left++;
            }else{
                cout<<arr[i]<<", "<<arr[left]<<" and "<<arr[right];
                
                left++;
                cout<<endl;
            }
        }
    }
    return 0;
}