#include <iostream>
#include<cstring>
#define pb push_back
using namespace std;
int StringtoInt(string s){
    int ans=0;
    //char into int--> char - char = int 
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int dig=ch-'0';
        ans=ans*10+dig;
    }
    return ans;
}
int solve(string s){
    int ans=0;
    string val;
    for(int i=0;i<s.length();){
        val.clear();
        if(s[i]>='0' and s[i]<='9'){
            while(s[i]>='0' and s[i]<='9'){
                val.pb(s[i++]);
            }
            //ans+=stoi(val); //string to int
            ans+=StringtoInt(val);
            
        }else{
            i++;
        }
    }
    return ans;
}
int main() {
	// your code goes here
	string s;
	cin>>s;
	cout<<solve(s)<<endl;
	
	return 0;
}
