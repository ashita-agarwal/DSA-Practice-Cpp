#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int a[10000];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int k;
	cin>>k;
	
	int cnt=0;
	for(int i=0;i<n;i++){
	    for(int j=i+1;j<n;j++){
	        if((a[j]+a[i])==k){
	            cnt++;
	        }
	    }
	}
	cout<<cnt;
	return 0;
}
