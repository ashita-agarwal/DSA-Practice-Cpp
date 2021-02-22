#include <iostream>
using namespace std;

void update(int *x){ //int *x= &a -->pointer x contains address of a
    *x=*x+1; //*x : derefer the pointer-->a
}
int main(){
    int a=1;
    cout<<a<<endl;

    update(&a); //&a: address of bucket a 
    cout<<a<<endl;
    
    return 0;
}
