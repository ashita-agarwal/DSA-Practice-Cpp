#include<iostream>
using namespace std;
int main(){
  char c;
  cin>>c;

  if(c>='a' and c<='z'){ //97 to 122
      cout<<"lowercase letter";
  }else if(c>='A' and c<='Z'){   //65 to 90
      cout<<"uppercase letter";
  }


return 0;
}