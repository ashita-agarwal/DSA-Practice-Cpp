#include <iostream>
using namespace std;
int main() {
  int  a=10;
  float f=10.11;
    char ch='A';
    char b[]="hello";

    int *aptr =&a;//initialisation of a pointer

    float *fptr; //creation of pointer
    fptr= &f; //assignment 
    char *chptr= &ch;

  cout<<"&a: "<<&a<<endl;
  cout<<"&f: "<<&f<<endl;
  cout<<"&ch: "<<&ch<<endl;
  cout<<"&b: "<<&b<<endl; //ch is also printing extra \n means garbage value unitl null value
  
  cout<<"b : "<<b<<endl; // char array name is the 0th index
  cout<<"chptr: "<<chptr<<endl; //char addresses are treated differently 
  cout<<"fptr: "<<fptr<<endl; 
  cout<<"(int*)chptr: "<<(int*)chptr<<endl; //confuse the compiler
  cout<<"&ch: "<<(int*)&ch<<endl; //or float pointer u cn use
    return 0;
}
