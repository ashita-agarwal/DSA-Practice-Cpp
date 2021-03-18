#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
	
	int i=0; //index of negative numbers 
	for(int j=0;j<n;j++){
	    if(a[j]<0){
	        swap(a[i],a[j]);
	        i++; //will be only incresed when a negative no is found
	    }
	}
	for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
	return 0;
}
