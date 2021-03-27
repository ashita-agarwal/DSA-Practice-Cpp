#include<iostream>
using namespace std;
int main() {
	int t;
	int n;
	cin>>t; //test cases
	while(t--){
		cin>>n;
        int a=n;
		int setbit_count=0;
		while(a){
			a=a & (a-1);
			setbit_count++;
		}
		cout<<setbit_count<<endl;
		int unsetbit_cnt=0;
		while(n!=0){
		    if((n&1) != 1){
		        unsetbit_cnt++;
		    }
		    n=n>>1;
		}
		cout<<unsetbit_cnt<<endl;
	}
	return 0;
}