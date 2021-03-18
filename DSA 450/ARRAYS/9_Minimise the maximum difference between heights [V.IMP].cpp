#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[1000];
	for (int i=0;i<n;i++){
	    cin>>a[i];
	}
	int k;
	cin>>k;
	
	for(int i=0;i<n;i++){
	    if((a[i]-k)>0){
	        a[i]=a[i]-k;
	    }else {
	        a[i]=a[i]+k;
	    }
	}
	for (int i=0;i<n;i++){
	    cout<<a[i]<<" ";
	}
	cout<<endl;
	sort(a,a+n);
	int ans=a[n-1]-a[0];
	cout<<ans;
	return 0;
}
