#include <iostream>
using namespace std;
int BinarySearch(int *a,int n,int key){
    int s=0;  //starting
    int e=n; //ending 
    while(s<=e){
        int mid= (s+e)/2 ;
        //middle elem
        if(a[mid]==key){
            return mid;
            break;
        }else if(a[mid]>key){
            e=mid-1;
        }else{
            s=mid+1;
        }
        
    }
    return -1;
    
}
int main() {
	// your code goes here
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(int);
	int key=4;
	int ans=BinarySearch(a,n,key);
	if(ans==-1){
	    cout<<"key not found";
	}else{
	    cout<<"key found at "<<ans;
	}
	return 0;
}
