#include <iostream>
using namespace std;

void printTable(int init,int fval,int step){
    for(int f=init;f<=fval;f=f+step){
        int c=(5*(f-32))/9;
        cout<<f<<" "<<c<<endl;
    }
}
int main() {
    int a[]={1,4,2,3,5};
    int n=sizeof(a)/sizeof(int);
   
    
    printTable(0,300,20);
    return 0;
}
