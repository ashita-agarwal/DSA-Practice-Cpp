#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int m=n;
	if(n<=0){
		cout<<"False";
	}
	//there shud be only 1 set bit on odd position at extreme left
	int count=0;
	while(n){
		n=n&(n-1);
		count++;
	}
	if(count==1){ 
		int cnt=0;
		while(m){
			cnt++;
			m=m>>1;
		}
		if((cnt&1)==1){
			cout<<"True";
		}else{
			cout<<"False";
		}
	}else{
		cout<<"False";
	}

	return 0;
}