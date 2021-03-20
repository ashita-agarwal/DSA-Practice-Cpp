#include <iostream>
using namespace std;
bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int cs=0;
        
        for(int i=0;i<n;i++){
            cs += arr[i];
            if(cs==0){
                return true;
            }
        }
         
        
        return false;
    }
int main() {
	// your code goes here
	int arr[]={4 ,5 ,-4, -2, 1};
	int n=5;
	if(subArrayExists(arr,n) ==  true){
	    cout<<"yes";
	}else{
	    cout<<"no";
	};
	
	return 0;
}
