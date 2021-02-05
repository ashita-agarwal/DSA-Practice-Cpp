#include<iostream>
using namespace std;
int main() {
	
	int i,N,j;
	cin>>N;
	for (i=1;i<=N;i++){
		for(j=1;j<=i;j++){
			if(i%2==0){
				//even row
				if(j==1 || j==i){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			else{
				//odd row
				cout<<"1";
				
			}
		}	
	cout<<endl;
	}
	return 0;
}