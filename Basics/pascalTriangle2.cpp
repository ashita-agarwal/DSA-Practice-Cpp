#include<iostream>
using namespace std;
int main(){
	int N,row,col,space;
	cin>>N;//number of rows
	for (row=0;row<N;row++){
		
		int val=1;//inside for loop
		
		for(col=0;col<=row;col++){ //column
			cout<<val<<" "; //value to be printed
			val=val*(row-col)/(col+1); //the formula 
		}
	cout<<endl;
	}
	return 0;
}