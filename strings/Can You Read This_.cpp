#include<iostream>
using namespace std;
int main() {
	char a[1005];
	cin>>a;
	int i;
	for(i=0;a[i]!='\0';i++){
	
		if (a[i]>=65 and a[i]<=90){
			cout<<endl;
		}
			cout<<a[i];
	}
	return 0;
}