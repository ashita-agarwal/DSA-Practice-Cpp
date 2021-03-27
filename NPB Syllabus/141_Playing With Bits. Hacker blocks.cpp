#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n1,n2;
		cin>>n1;
		cin>>n2;
		int count =0;
		for(int i=n1;i<=n2;){
			int n=i;
			//count set bits of every number
			while(n){
				n=n&(n-1);
				count++;
				n=n>>1;
			}
			i++;
		}
		
		cout<<count<<endl;
	}
	return 0;
}