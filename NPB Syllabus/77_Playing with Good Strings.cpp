#include <iostream>
using namespace std;
bool check(char c){
    return ( (c=='a') or (c=='e') or (c=='i') or (c=='o') or (c=='u')  );
}
int main() {
    string s;
    cin>>s;
    int i=0;
    int count=0;
    int maxval=0;
    while(i<s.length()){
        if(check(s[i])){
            count++;
            i++;
            maxval = max(maxval,count);
        }else{
            count=0;
            i++;
        }
    }
    cout<<maxval;
    return 0;
}
