#include<iostream>
#include<climits>
using namespace std;
int main() {
 int n;
 cin>>n;
 int a[n]={};
 for(int i=0;i<n;i++){
	 cin>>a[i];
 }
 int i,max;
 max=INT_MIN;
for( i=0;i<n;i++){
	if(max<a[i]){
		max=a[i];
	}
}
cout<<max;
	return 0;
}