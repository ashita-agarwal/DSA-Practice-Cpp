#include <iostream>
using namespace std;
//valley peak approach
int minJumps(int a[],int n){
    if(n<=1){
        return 0; //zero jumps reqd if numbers are only one
    }
    if(a[0]==0){
        return -1; //jumps not possible
    }
    
    int farthest=a[0]; //farthest index that can be reached
    int step=a[0]; //no of steps we can take
    int jump=1; //stores our answer
    
    for(int i=1;i<n;i++){
        if(i==n-1){
            return jump;
        }
        farthest=max(farthest,i+a[i]);
        step--;
        if(step==0){
            jump++;
            if(i>=farthest){
                return -1; //not possible
            }
             step=farthest-i;
        }
       
    }
    return -1;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int a[10000];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	
    cout<<minJumps(a,n);
	
	return 0;
}
