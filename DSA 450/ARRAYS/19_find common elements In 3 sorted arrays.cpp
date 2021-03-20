#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	
	int a[]={1, 5, 10, 20, 40, 80};
	int n=sizeof(a)/sizeof(int);
	int b[]={6, 7, 20, 80, 100};
	int m=sizeof(b)/sizeof(int);
	int c[]={3, 4, 15, 20, 30, 70, 80, 120};
	int l=sizeof(c)/sizeof(int);
	
	int i=0,j=0,k=0;
	while(i<n and j<m and k<l){
	    if(a[i]==b[j] and b[j]==c[k]){
	        cout<<a[i]<<" ";
	        i++,j++,k++;
	    }else if(a[i]<b[j]){
	        i++;
	    }else if(b[j]<c[k]){
	        j++;
	    }else{
	        k++;
	    }
	}
	

	return 0;
}
