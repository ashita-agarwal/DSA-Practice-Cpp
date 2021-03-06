#include <iostream>
using namespace std;
int main() {

	int n;
	cin >> n;

	int a[100];
	int ans = 0;
	for (int i = 0 ; i < n-2 ; i++) {
		cin >> a[i];
		ans ^= a[i];
	}
    	for (int i = 1 ; i <= n; i++) {
		ans ^= i;
	}

	int bitpos = 0;
	while ((ans & 1) != 1) {
		bitpos++;
		ans = ans >> 1;
	}

	int val = (1 << bitpos);


	int no1 = 0, no2 = 0;
	for (int i = 0 ; i < n-2 ; i++) {
		if ((a[i]&val) == 0) {

			no1 ^= a[i];
		}
		else {

			no2 ^= a[i];
		}
	}
    	for (int i = 1 ; i <= n ; i++) {
		if ((i&val) == 0) {

			no1 ^= i;
		}
		else {

			no2 ^= i;
		}
	}

	cout << "Missing Number are : " << no1 << " and " << no2 << endl;

	return 0;
}