#include<iostream>

using namespace std;
int main() {
	
	char str[1005];
	cin>>str;
	int d;
	int i;
	for( i=0;str[i+1]!='\0';i++){
		d=str[i+1]-str[i];
		 cout<<str[i]<<d;
	}
	cout<<str[i];
	return 0;
}