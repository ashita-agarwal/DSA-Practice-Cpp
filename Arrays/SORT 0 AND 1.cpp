#include <iostream>
using namespace std;
int main() {
    int n,i,j;
	cin>>n;
    int a[n]={};
    for(i=0;i<n;i++){
        cin>>a[i]; 
    }
    // for(i=0;i<size;i++){
    //     cout<<a[i]<<" ";}

//BUBBLE SORT 

   for (int i=0;i<=n-2;i++){
        for(int j=0;j<=n-2-i;j++){
            if(a[j]>a[j+1]){
                //swapping 1st way
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;

                //swapping 2nd way
                // arr[j]=arr[j]+arr[j+1];
                // arr[j+1]=arr[j]-arr[j+1];
                // arr[j]=arr[j]-arr[j+1];

                //swapping 3rd way
                a[j]=(a[j]+a[j+1])-(a[j+1]=a[j]);

                
            }
        } 
    }
    for(i=0;i<n;i++){
      cout<<a[i]<<" ";
      }

    return 0;
}
