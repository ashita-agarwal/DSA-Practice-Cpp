#include<iostream>
using namespace std;
int main () {
	int i,j,N,space;
	cin>>N;
	for(i=1;i<=N;i++){
		for(space=1;space<=(i-1);space++){
			cout<<" ";
		}
		
		for(j=1;j<=N;j++){
						
			if(j<=(N-(i-1))){
				cout<<"*"<<" ";
			}

		}
	cout<<endl;	
	}
	return 0;
}