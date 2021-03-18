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
	//KADANE'S ALGO
	int cs=0,ms=0;//current sum and max sum
	for(int i=0;i<n;i++){
	    cs=cs+a[i];
	    if(cs<0){
	        cs=0;
	    }
	    if(cs>ms){
	        ms=cs;
	    }
	}
	cout<<ms;
	return 0;
}
