#include <iostream>
using namespace std;
//square root using binary search
float squareRoot(int n){
    int s=0;
    int e=n;
    float ans=0.0;
    while(s<=e){
        int mid=(s+e)/2;
        if(mid*mid == n){
            ans=mid;
            return ans;
            break;
        }else if(mid*mid > n){
            e=mid-1;
        }else{
            ans=mid; //in case of non-perfect square
            s=mid+1;
        }
    }
    
    //precision
    float inc=0.1;
    int precision=3;
    int currentPrecision=1;
    while(currentPrecision<=precision){
        while(ans*ans <= n){
            ans = ans+inc;
        }
        ans= ans-inc;
        inc = inc/10; //next decimal digit
        currentPrecision++;
    }
    
    return ans;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	
	//without binary search
	
// 	int a=0;
// 	while(a*a<=n){
// 	    a++;
// 	}
// 	a--;
// 	cout<<a<<endl;

    float ans=squareRoot(n);
	cout<<ans;
	return 0;
}
