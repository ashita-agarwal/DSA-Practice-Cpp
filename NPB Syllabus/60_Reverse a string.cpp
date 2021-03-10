#include <iostream>
using namespace std;
int main() {
        char a[1000];
        cin.getline(a,1000);
        int len;
        for(len=0;a[len]!='\0';len++){}
        int j=len-1;
        for(;j>=0;j--){
            cout<<a[j];
        }

       return 0;
}
