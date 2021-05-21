#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int sum =0; int rem =0;
int revNum(int n){
   if(n>0){
         rem = n%10;
         sum = sum*10 + rem ;
            revNum(n/10);
    }else{
        return sum;
    }
  return sum;
}
int main() {
    int n;
    cin>>n;
    int ans =revNum(n);
    cout<<ans;
    return 0;
}
