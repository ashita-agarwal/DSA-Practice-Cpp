#include <iostream>
#include<climits>
using namespace std;
int maxNo=INT_MIN,minNo=INT_MAX;
void Max(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]>maxNo){
            maxNo=a[i];
        }
    }
    cout<<maxNo<<" ";
}
void Min(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]<minNo){
            minNo=a[i];
        }
    }
    cout<<minNo<<" ";
}

int main() {
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Max(a,n);
    Min(a,n);
    return 0;
}
