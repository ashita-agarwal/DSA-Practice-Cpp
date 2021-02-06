#include<iostream>
using namespace std;
int main() {
	int i,space,N;
	cin>>N;
	for(i=1;i<=N;i++){
		for(space=1;space<=N-i;space++){
			cout<<" ";
		}
		if(i==1 || i==N){
			for(int star=1;star<=N;star++){
				cout<<"*";
							}
		}else{
			cout<<"*";
			for(space=1;space<=N-2;space++){
				cout<<" ";
				
			}cout<<"*";
		}

		cout<<endl;
	}
	return 0;
}