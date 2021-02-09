#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int num,count,r,sum=0,i;
    cin>>num;
    int a=num;
    int b=num;
    for (count=0;a!=0;count++){
            a=a/10;
    }
    for(i=0;b!=0;i++){
        r=b%10;
        sum=sum+ pow(r,count);
        b=b/10;
    }
    if(sum==num){
        cout<<"true";
    }else{
        cout<<"false";
    }
return 0;
}
