#include<iostream>
using namespace std;
int main(){
  int n;//no of rows
  cin>>n;
    int val=1;
  for(int i=1;i<=n;i++){
      //spaces
      for(int j=1;j<=n-i;j++){
          cout<<"\t";
      }

      //values
      for(int j=1;j<=(2*i)-1;j++){
          cout<<val<<"\t";
          val++;
      }
      cout<<endl;
  }
return 0;
}