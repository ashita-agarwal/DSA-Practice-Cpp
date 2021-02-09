#include <iostream>
using namespace std;
int main() {
// Inverse of an array means if the array elements are swapped with their corresponding indices
//  and the array is called mirror-inverse if it’s inverse is equal to itself.
int n,i;
cin>>n;
int a[n]={};


for(int i=0;i<n;i++){
    cin>>a[i];
}


for(i=0;i<n;i++){
	if(i==a[a[i]]){ 
        continue;
    }else{
        cout<<"false";
        break;
    }
}
if(i==n){
    cout<<"true";
}
return 0;
}