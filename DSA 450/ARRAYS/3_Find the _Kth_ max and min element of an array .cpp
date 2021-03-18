#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int k;
    cin>>k;
    cout<<"kth min "<<a[k-1]<<endl;;
    cout<<"kth max "<<a[n-k];
    return 0;
}
