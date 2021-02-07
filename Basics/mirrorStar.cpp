#include<iostream>
using namespace std;
int main(){
	int N;
	cin>>N; //no of rows --> input
	int space=N/2; //intialising space from N-2 (then will inc/dec  according to row no)
	int star=1; //intialise star --> inc/dec acc to row
	for(int i=1;i<=N;i++){ //rows
		for(int j=1;j<=space;j++){ //columns
			cout<<"\t"; //space
		}
		for(int j=1;j<star*2;j++){
			cout<<"*"<<"\t"; //star with tab spacing
		}
		cout<<endl;  //after printing stars end line
		//acc to row star and space 
		if(i<=(N/2)){
			space--;
			star++;
		}else{
			space++;
			star--;
		}


		
	}


	return 0;
}