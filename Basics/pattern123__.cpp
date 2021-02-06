#include<iostream>
using namespace std ;
int main() {
	int N,i,j;
	cin>>N;
	for(i=1;i<=N;i++){
		int val=1;
		for(j=1;j<=N;j++){
			//numbers
			if(j<=i){
				cout<<val;
				val++;
			}
			//stars
			else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	return 0;
}