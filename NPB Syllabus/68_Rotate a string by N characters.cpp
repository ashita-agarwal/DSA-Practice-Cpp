#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char a[10000];
	cin.getline(a,10000);
	int n;
	for( n=0;a[n]!='\0';n++){}
	int k;
	cin>>k;
	//shift the string k char ahead
	for(int j=n-1;j>=0;j--){
	    a[j+k]=a[j];
	}
	cout<<"shift the string k char ahead  "<<a<<endl;
	//copy last k char to front
	int j=n,i=0;
	while(j<n+k){
	    a[i++]=a[j++];
	    
	}
	cout<<"copy last k char in front  "<<a<<endl;
	a[n]='\0';
	cout<<"insert null at end and print  "<<a<<"  <---FINAL RESULT"<<endl;
	return 0;
}
