#include <iostream>
#include<climits>
using namespace std;

int main() {
	// your code goes here
	int arr[]={6, -3, -10, 0, 2};
	int n=sizeof(arr)/sizeof(int);
	bool prod_zero=false;
	   //frwd traversal
	int currentProd=1,maxProd=INT_MIN;
	for(int i=0;i<n;i++){
	    
	    currentProd*=arr[i];
	    if(currentProd==0){
	        prod_zero=true;
	        currentProd=1;
	        continue;
	        
	    }
	    maxProd=max(maxProd,currentProd);
	    
	}
	//backward traversal
	int currentProd1=1,maxProd1=INT_MIN;
	for(int i=n-1;i>=0;i--){
	    
	    currentProd1*=arr[i];
	    if(currentProd1==0){
	        prod_zero=true;
	        currentProd1=1;
	       continue;
	    }
	    maxProd1=max(maxProd1,currentProd1);
	    
	}
	int ans=max(maxProd,maxProd1);
	if(prod_zero==true){
	    cout<< max(ans,0);
	}else{
	    cout<<ans;
	}
	return 0;
}
