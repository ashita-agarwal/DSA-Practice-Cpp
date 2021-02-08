#include <iostream>
using namespace std;
int main() {
    int a[100];
    int n;
    //cout<<"enter n(max:100)";
    cin>>n;
    //cout<<"enter value of "<< n <<" buckets"<<endl;
    for(int i=0;i<n;i++){
        //cin>>a[i];
        a[i]=i+1;
        cout<<a[i]<<" ";

        
    }
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    cout<<endl;
    for(int i=n-1;i>=0;i--){ //decreasing 10 numbers
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
