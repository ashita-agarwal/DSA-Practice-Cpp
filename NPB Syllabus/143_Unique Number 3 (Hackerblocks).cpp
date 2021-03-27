#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[10000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int count[64]={0};
	for(int i=0;i<n;i++){
		int num=a[i];
		
		int j=0;
		while(num>0){
			//extract bits of every num
			count[j]=count[j]+(num&1);
			j++;
			num=num>>1;
		}
	}
		int power=1; //2^0=1
		int ans=0;
	for(int i=0;i<64;i++){
		count[i]=count[i] % 3;
		ans=ans+count[i]*power;
		power= power*2;
	}
	cout<<ans;
	return 0;
}
