#include<iostream>
using namespace std;
int main(){
	int  n;
	cin>>n;
	int a[n]={ };
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int c0=0,c1=0,c2=0;
	for(int i=0;i<n;i++){
		if(a[i]==0){
			c0++;
		}else if(a[i]==1){
			c1++;
		}else {
			c2++;
		}
	}
	while(c0--){
		cout<<"0"<<endl;
			}
	while(c1--){
		cout<<"1"<<endl;
	}
	while(c2--){
		cout<<"2"<<endl;
	}
	return 0;
}