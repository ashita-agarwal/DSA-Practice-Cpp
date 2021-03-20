#include <iostream>
using namespace std;
void merge(int a[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a1[n1];
    int a2[n2];
    for(int i=0;i<n1;i++){
        a1[i]=a[l+i];
    }
    for(int i=0;i<n2;i++){
        a2[i]=a[mid+1+i];
    }
    int k=l;
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(a1[i]<a2[j]){
            a[k]=a1[i];
            k++,i++;
        }
        else{
            a[k]=a2[j];
            k++,j++;
        }
    }
    while(i<n1){
        a[k]=a1[i];
        k++,i++;
    }
    while(j<n2){
         a[k]=a2[j];
        k++,j++;
    }
}
void mergeSort(int a[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        
        merge(a,l,mid,r);
    }
}
int main() {
	// your code goes here
	   int  arr[] = {2, 4, 1, 3, 5};
	   //int n = sizeof(arr)/sizeof(int);
    mergeSort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
	return 0;
}

