#include <iostream>
#include<cstring>
using namespace std;
int main() {
    string s;
    cin>>s;
     string n;
     int sum=0;
    for(int i=0;i<s.length();){
       n.clear();
        if(s[i]>='0' and s[i]<='9' ){
            while(s[i]>='0' and s[i]<='9'){
                n.push_back(s[i++]);
            }
            sum += stoi(n);
        }else{
            i++;
        }
    }
    cout<<sum;
    return 0;
}
