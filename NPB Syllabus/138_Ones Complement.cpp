#include<iostream>
#include<cmath>
using namespace std;
int main () {
	int n;
	cin>>n;
	int m = n;
	//count the number of bits in the given number
	int count = 0;
	while(n){
		n = n>>1;
		count++;
	}
	
	int value = (pow(2,count)-1);
	//or  int value= (1<<count)-1;
	int ans = (m ^ value);
	cout<<ans<<endl;
	return 0;
	
	return 0;
}
