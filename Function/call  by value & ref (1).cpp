#include <iostream>
using namespace std;

//CALL BY REFERENCE 

void update(int &x){
  x=x+1;
  //cout<<"inside fn: "<<x<<endl;
}

//CALL BY VALUE

// void update(int x){
//   x=x+1;
//   //cout<<"inside fn: "<<x<<endl;
// }
int main(){
    int a =1;
    cout<<a<<endl; //before updation

    update(a); 

    cout<<a<<endl; //after updation-->bt a is in scope of main (nt outside)
    
    return 0;
}
