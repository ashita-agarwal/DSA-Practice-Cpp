#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin>>s;
	int n=s.length();
	for(int i=0;i<n;){ //for every char of string 
		int cnt=1;
		while(i<n-1 and s[i]==s[i+1]){
			cnt++;
			i++; //a--3
		}
		if(cnt==1){
			cout<<s[i];
		}else{
		cout<<s[i]<<cnt;}
		i++; //b--4
	}
	return 0;

}