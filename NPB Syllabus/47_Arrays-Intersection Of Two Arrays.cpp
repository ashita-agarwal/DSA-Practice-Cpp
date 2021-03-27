#include <iostream>
#include <algorithm>
using namespace std;
void intersection_array(int n,int *a,int m,int *b){
    int intersec[1000];
    int i=0,j=0; //pointers for the two sorted arrays
    while(i<n and j<m){
        if(a[i]==b[j]){
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        else{
            if(a[i]<b[j]){
                i++;
            }else{
                j++;
            }
        }
    }
}
int main() {
	// your code goes here
	int a[]={1,2,3,4};
	int n=sizeof(a)/sizeof(int);
	int b[]={4,5,6};
	int m=sizeof(b)/sizeof(int);
	
	intersection_array(n,a,m,b);
	return 0;
}
