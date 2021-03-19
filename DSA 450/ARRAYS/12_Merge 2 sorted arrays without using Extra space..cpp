#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
	// your code goes here
	//taking input of two arrays
	int n;
	cin>>n;
	int a[10000];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int m;
	cin>>m;
	int b[10000];
	for(int i=0;i<m;i++){
	    cin>>b[i];
	}
	
	
	for(int i=0;i<n;i++){
	    
	   for(int j=0;j<m;j++){
	       
	       if(b[j]<a[i]){
	       swap(a[i],b[j]);
	       sort(b,b+m);
	        }
	   }
	   
	}
	
	for(int i=0;i<n;i++){
	    cout<<a[i]<<" ";
	}
	for(int i=0;i<m;i++){
	    cout<<b[i]<<" ";
	}
	return 0;
}
