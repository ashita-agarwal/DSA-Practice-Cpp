#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a[10000];
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int temp=a[n-1];
	for(int i=n-1;i>0;i--){
	    a[i]=a[i-1];
	}
	a[0]=temp;
	for(int i=0;i<n;i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}
