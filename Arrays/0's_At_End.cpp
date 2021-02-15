#include<iostream>
using namespace std;
int main() {
	int n;//size of array
	cin>>n;
	int a[n]={}; //given array 
	int d[n]={ }; //result array
	for(int i=0;i<n;i++){
		cin>>a[i]; //input array
	}
	int c0=0; //counter for zero
	
	for(int i=0;i<n;i++){
		if(a[i]==0){
			c0++;
		}
	}
	//putting non zero value in result array
	int i,j=0;
	for( i=0;i<n;i++){
		if(a[i]!=0){
            d[j]=a[i];
            j++;
        }
	}	
	//putting c0 times zero in result array
	while(c0>0){
		d[i]=0;
		c0--;
	}
	//printing out the result array
	for(int i=0;i<n;i++){
		cout<<d[i]<<" ";
	}
	return 0;
}