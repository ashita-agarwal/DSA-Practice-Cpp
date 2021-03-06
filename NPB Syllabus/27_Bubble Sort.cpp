#include <iostream>
using namespace std;
int main() {
    
    int size;
    cin>>size;
    int a[size]={};
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    //bubble sort 
    for(int i=0;i<=size-2;i++){
        for(int j=0;j<=size-2-i;j++){
            if(a[j]>a[j+1]){
                //swap(a[j],a[j+1]);
                a[j]=(a[j]+a[j+1])-(a[j+1]=a[j]);
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
