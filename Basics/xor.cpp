#include<iostream>
using namespace std;
int main(){
    int n,no,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>no;
        ans^=no;
    }
    cout<<ans;
    cout<<endl;
    return 0;
}