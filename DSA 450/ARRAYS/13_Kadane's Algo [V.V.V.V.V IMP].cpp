#include <iostream>
using namespace std;
int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int cs=0;
        int ms=0;
        for(int i=0;i<n;i++){
            cs=cs+arr[i];
            if(cs<0){
                cs=0;
            }
            ms=max(ms,cs);
        }
        return ms;
    }
int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[10000];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	cout<<maxSubarraySum(a,n);
	return 0;
}
