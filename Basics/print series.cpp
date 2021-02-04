#include<iostream>
using namespace std;
int main() {
	int N1,N2,i=1,n,num=1,count=1;
	cin>>N1>>N2;
	while(count<=N1){
		n=(3*i)+2;
		if(n%N2!=0){
			cout<<n<<endl;
			count++;
		}
		i++;
	}

	

	return 0;
 
}