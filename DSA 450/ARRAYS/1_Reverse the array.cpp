#include <iostream>
using namespace std;
void reverseArray(int a[],int i,int j){
      int temp;
    while(i<j){
      
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++,j--;
    }
}
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main() {
    int a[100000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverseArray(a,0,n-1);
    printArray(a,n);
    return 0;
}
