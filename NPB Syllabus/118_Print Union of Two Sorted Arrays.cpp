#include <iostream>
#include <algorithm>
using namespace std;
void union_array(int n,int *a,int m,int *b){
    int u[1000];
    
    for(int i=0;i<n;i++){
        u[i]=a[i];
        
    }
    for(int i=n;i<n+m;i++){
        u[i]=b[i-n];
    }
    sort(u,u+n+m);
    for(int i=0;i<n+m;i++){
        if(i>0){
            if(u[i]!=u[i-1]){
                cout<<u[i]<<" ";
            }
        }else{
            
         cout<<u[i]<<" ";
        }
    }
}
int main() {
	// your code goes here
	int a[]={1,2,3,4,9};
	int n=sizeof(a)/sizeof(int);
	int b[]={4,5,6,7,3,8};
	int m=sizeof(b)/sizeof(int);
	
	union_array(n,a,m,b);
	return 0;
}
