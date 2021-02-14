#include<iostream>
using namespace std;
int main () {
	char a[100];
	char ch;
	cin.getline(a, 100);  //storing input in  char array
	
	int i;
	
    for(i=0;a[i]!='\0';i++){
		a[i]=ch; 
		ch=cin.get(); //taking char at a time
	}
	cout<<i;
	return 0;
}