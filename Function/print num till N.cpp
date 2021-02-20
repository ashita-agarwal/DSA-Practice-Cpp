#include <iostream>
using namespace std;
void printNumbers(int n){ //argument
    for(int i=0;i<n;i++){
        cout<<i<<" ";
    }
        
    cout<<endl;
}
int main() {
    int n;
    cin>>n;

    printNumbers(n); //call the fn 
    printNumbers(n); //u can call/invoke it infinite times
    
    //more organised code
    //readability improves
    //reusable piece of code
    
    return 0;
}
