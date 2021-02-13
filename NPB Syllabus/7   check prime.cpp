#include<iostream>
using namespace std;
int main() {
int N,num=2;
cin>>N;
while(num<N){	
	if (N%num==0){
		cout<<"Not Prime";
		break;
	}
	else{
		cout<<"Prime";
	}
	return 0;
num=num+1;	
}
	
}