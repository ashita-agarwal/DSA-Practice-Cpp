#include<iostream>
using namespace std;
int main () {
	char a[1000];
	cin>>a;
	char ch;
	cin>>ch;
	int i;
	for(i=0;a[i]!='\0';){
		if(a[i]==ch){
			i++;
		}
		else{
			cout<<a[i];
			i++;
		
	}
	}
	return 0;
}	
	