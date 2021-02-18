#include <iostream>
using namespace std;
int main() {
    char a[100];
    cin>>a;

    
    int i=0;
    int len;
    for(len=0;a[len]!='\0';len++){}
    int j=len-1;
    //two pointer approach
    while(i<j){
        swap(a[i++],a[j--]);
    }
    cout<<a<<endl;
    return 0;
}
