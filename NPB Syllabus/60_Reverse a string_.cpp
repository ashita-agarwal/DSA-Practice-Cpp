#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char a[100];
	cin>>a;
	int n;
	for( n=0;a[n]!='\0';n++){}
	int j=0;
	for(int i=n-1;i>=0;i--){
	    swap(a[j++],a[i--]);
	}
	cout<<a;
	
	return 0;
}
