#include<iostream>

#include <climits>
using namespace std;
int main () {
	int N;
	int count=1;
	int max=INT_MIN;
	
	while (count<=5){
	cin >> N ;
		if(max<N){
			max=N;
		}
	count=count+1;
	
	}
	cout<<max;
	return 0;
}

