#include<iostream>
using namespace std;
int main(){
	int i,j,N,val,space;
	cin>>N;
	for(i=0;i<N;i++){
		//spaces
		val=i+1;
		for(space=1;space<(N-i);space++){
			cout<<"\t";
		}

		//numbers
			for(j=1;j<=((2*i)+1);j++){
				if(j<=i){
					cout<<val<<"\t";
					val++;
				}
				else{
					cout<<val<<"\t";
					val--;
				}
			}

		cout<<endl;
	}
	return 0;
}