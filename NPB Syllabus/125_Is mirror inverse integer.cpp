#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[10000]={0};//array where number will b stored
    int i=1;
    while(n!=0){
        a[i]=n%10;
        n=n/10;
        i++;
    }
    bool flag=1;
    for(int j=0;j<i-1;j++){
        if(a[a[j]]==j){
            continue;

        }else{
            flag =0;
            break;
        }
    }
    if(flag==1){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
