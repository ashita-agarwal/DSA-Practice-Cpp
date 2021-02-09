#include <iostream>
using namespace std;
int main() {
    int n,M;
    cin>>n;
    int arr[n]={};
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>M;
    int i;
    for( i=0;i<n;i++){
        if(arr[i]==M){
            cout<<i<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"-1";
    }

   return 0;
}
