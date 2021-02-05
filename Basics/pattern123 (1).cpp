#include<iostream>
using namespace std;
int main() {
	int i,j,N;
	cin>>N;
	
	for (i=1;i<=N;i++){
		if(i==1){
			cout<<"1";
		}
		else{
			for(j=1;j<=i;j++){
			
			if(j==1 || j==i){
				cout<<(i-1);
			}
			else{
				cout<<0;
			}
		}

		}
		
		cout<<endl;
	}
	return 0;
}