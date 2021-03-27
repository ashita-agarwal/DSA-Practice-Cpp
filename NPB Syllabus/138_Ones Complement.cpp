#include<iostream>
#include<cmath>
using namespace std;
int main () {
	int n;
	cin>>n;
	int TotBits = floor(log2(n))+1;
	
	int mask=(1<<TotBits)-1;
	cout<< (mask^n);
	
	return 0;
}