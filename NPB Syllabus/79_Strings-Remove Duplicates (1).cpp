#include <iostream>
using namespace std;

void removeduplicates(string s){
   int i=0;
   for(int i=0;i<s.length();i++){
	   if(i==0){
		   cout<<s[i];
	   }else if (s[i]!=s[i-1]){
		   cout<<s[i];
	   }
   }
   
   
}
int main() {
  string str;
  cin>>str;
    removeduplicates(str);
	
    return 0;
}
