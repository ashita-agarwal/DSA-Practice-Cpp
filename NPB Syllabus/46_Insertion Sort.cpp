#include <iostream>
using namespace std;
int main() {
    int i,j,a[100],temp,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //INSERTION SORT
    for(i=1;i<n;i++){
        temp=a[i];
        for(j=i-1;j>=0 and a[j]>temp;j--){
            
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
