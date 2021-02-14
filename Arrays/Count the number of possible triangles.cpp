#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int a[n]={ };
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int count=0;
    //three loops take three numbers
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				//sum of two sides greater than the third
				if(a[i]+a[j]>a[k] and a[j]+a[k]>a[i] and a[k]+a[i]>a[j]){
					count++;
				}

			}
		}
	}
	cout<<count;
	return 0;
}