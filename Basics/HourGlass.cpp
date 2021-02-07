#include <iostream>
using namespace std;

int main(){
	int n ;
	cin >> n;
	//UPPER TRIANGLE
	for (int i = 0 ; i <= n ; i++) {
		//SPACES
		for (int j = 0 ; j <= i-1 ; j++) {
			cout <<"  ";
		}
		//LEFT_HALF
		for (int j = n-i ; j >= 0 ; j--) {
			cout << j << " ";
		}
		//RIGHT_HALF
		for (int j = 1; j <= n - i ; j++){
			cout << j <<" ";
		}
		cout <<endl;
	}
	//LOWER TRIANGLE
	for (int i = 0 ; i <n ; i++) {
		//SPACES
		for (int j = 0 ; j < n - i - 1 ; j++){
			cout <<"  ";
		}
		//LEFT_HALF
		for (int j = i+1 ; j >= 0 ; j--) {
			cout << j <<" ";
		}
		//RIGHT_HALF
		for (int j = 1 ; j <= i+1 ; j++) {
			cout << j <<" ";
		}
		cout <<endl;
	}
	return 0;
}