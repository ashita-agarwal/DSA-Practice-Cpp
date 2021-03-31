#include <iostream>
using namespace std;

string removeduplicates(string s){
    string a;
    int i=0;
    while(i<s.length()){
    if(s[i]==s[i+1]){
        a.push_back(s[i]);
        i++;
        }
        else{
            a.push_back(s[i]);
           
        }
        i++;
   }
   a.push_back('\0');
   return a;
}
int main() {
    string str;
    cin>>str;
    cout<<removeduplicates(str);
    return 0;
}
