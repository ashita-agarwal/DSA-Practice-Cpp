#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[1000005];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool isLeader=true;
    int k=0;
    int b[1000005]; //to store leaders
    for(int i=0;i<n;i++){
        isLeader=true;
        //rightmost is always a leader
        if(i==n-1){
            isLeader=true;
           
        }
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                isLeader=false;
                break;
            }
        }
        if(isLeader==true){
            b[k]=a[i];
            k++;
        }

    }
    sort(b,b+k);
    for(int i=0;i<k;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
