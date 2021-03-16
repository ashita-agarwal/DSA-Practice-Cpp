#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char a[100000];
	cin>>a;
	
	for(int i=0;a[i]!='\0';i++){
	    for(int len=i;a[len]!='\0';len++){
	        for(int k=i;k <= len ; k++){
	            cout << a[k];
	        }cout << endl;
	    }
	}
	return 0;
}
