#include <iostream>
#include<cstring>
using namespace std;
string solve(string s){
    string val;
    long long maxv=0;
    bool is9present;
    string ans="-1";
    
    for(int i=0;i<s.length();i++){
        if(i<s.length() and (s[i]>='0' and s[i]<='9')){
            val.clear();
            is9present = false;
                while(s[i]>='0' and s[i]<='9'){
                    
                    val.push_back(s[i]);
                    if(s[i]=='9'){
                        is9present=true;
                    }
                    i++;
                }
                if(is9present==false){
                    ans=val;
                    maxv=max(maxv,stoll(val));
                }
        }else{
            i++;
        }
        
        
    }
    return ans;
}
int main() {
	// your code goes here
	string s="you are 80896 and 80829";
	//cin>>s;
	cout<<solve(s);
	return 0;
}
