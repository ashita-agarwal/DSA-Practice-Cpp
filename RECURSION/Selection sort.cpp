#include <iostream>
using namespace std;
int FindMin(int *a,int n,int i){
    int min=i;
    for(int j=i+1;j<n;j++){
        if(a[j]<a[min]){
            min=j;
        }
    }
    return min;
}
void selectionSort(int *a,int n,int i){
    if(i==n-1){
        return;
    }
    int min=FindMin(a,n,i);
    if(i!=min){
        swap(a[i],a[min]);
    }
    selectionSort(a,n,i+1);
    
}
void print(int *a,int n){
for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main() {
    int a[]={5,4,3,2,1};
    int n =sizeof(a)/sizeof(int); //number of buckets
    
    selectionSort(a,n,0);
   print(a,n);
    return 0;
}