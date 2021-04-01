#include <iostream>
using namespace std;
int chessElement(int i,int j){
//base case
    if(i==0 and j==0){
        return 1;
    }
//recursive case
    int ans=0;
    for(int k=0;k<i;k++){
        ans += chessElement(k,j);
    }
    for(int k=0;k<j;k++){
        ans += chessElement(i,k);
    }
    return ans;
}
int main() {
    int n,m;
   cin>>n>>m;
 cout<<chessElement(n,m)<<endl;
   return 0;
}
