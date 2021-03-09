#include <iostream>
#include<climits>
using namespace std;
int main() {
    int n,max=INT_MIN;
    int a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
        }
    }
    //freq array
    int freq[10000];
    for(int i=0;i<max+1;i++){
        freq[i]=0;
    }
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    for(int i=0;i<max+1;i++){
        while(freq[i]--){
            cout<<i<<" ";
        }
    }
    return 0;
}
