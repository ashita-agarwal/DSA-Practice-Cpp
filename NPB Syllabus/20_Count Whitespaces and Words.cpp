#include <iostream>
using namespace std;
int main() {
    char ch;
    int whitespace=0,digits=0,words=0,special=0;
    ch=cin.get(); //considers whitespace
    while(ch!='$'){
        if(ch=='\n' or ch==' ' or ch=='\t'){
            whitespace++;
        }else if(ch>='a' and ch<='z' or ch>='A' and ch<='Z'){
            words++;
        }else if(ch>='0' and ch<='9'){
            digits++;
        }else{
            special++;
        }
        ch=cin.get();
    }
    cout<<"whitespace: "<<whitespace<<endl;
    cout<<"Digits: "<<digits<<endl;
    cout<<"Words: "<<words<<endl;
    cout<<"Special: "<<special;
    return 0;
}
