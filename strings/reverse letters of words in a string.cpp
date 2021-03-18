#include <iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
	// your code goes here
	string s;
	getline(cin,s);
	
	for(int i=0;i<s.length();i++){
	    string empty_string="";
	    while(s[i]!=' ' && i<s.length()){
	        empty_string.push_back(s[i]);
	        i++;
	    }
	    reverse(empty_string.begin(),empty_string.end());
	    cout<<empty_string<<" ";
	}
	
	return 0;
}
