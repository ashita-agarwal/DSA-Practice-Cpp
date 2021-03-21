#include <iostream>
using namespace std;
bool subArrayExists(int arr[], int n)
    {
        //Your code here
        bool zero =false;
        
        for(int i=0;i<n;i++){
               int  cs=0;
               
               for(int j=i;j<n;j++){
                   cs += arr[j];
                   if(cs==0){
                       zero = true;
                       return true;
                       break;
                   }
               }
               if (zero == true){
                   break;
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
