#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n; //size of array
    int n1=n;
    int n2=n;
	int a1[n1];
	int a2[n2];
    
     n1=sizeof(a1)/sizeof(int);
     n2=sizeof(a2)/sizeof(int);
    
    
	for(int i=0;i<n;i++){
		cin>>a1[i];
	}
	for(int i=0;i<n;i++){
		cin>>a2[i];
	}
    
	
	int a[1000000]={};
    a[0]=INT_MIN;
	int i,j,k=0;
	for( i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a1[i]==a2[j]){
                
				a[k]=a1[i];
                
                a[k+1]=INT_MIN;
				a2[j]='a'; //value matched not needed again ,so substitute with any value out of scope of given arrays
				k++;
                break;  //if a value matches break the loop
			}
		}
	}
    
    int lena=0;
    for(int i=0;a[i]!=INT_MIN;i++){
        lena++;
    }
    sort(a,a+lena);
   
	cout<<"[";
	for(int i=0;a[i]!=INT_MIN;i++)
	{
		if(a[i+1]==INT_MIN){
			cout<<a[i]<<"]";
		}else{
		cout<<a[i]<<", ";
		}
	}
	
    
	return 0;
}