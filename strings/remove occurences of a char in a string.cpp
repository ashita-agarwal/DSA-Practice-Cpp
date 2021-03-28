#include <iostream>
#include<string>
using namespace std;
int main() {
    string s;
    cin>>s;
    char ch;
    cin>>ch;

    string str="";
    for(int i=0;i<s.length();i++){
        if(s[i]!=ch){
            str.push_back(s[i]);
        }
    }
    cout<<str;
    return 0;
}
