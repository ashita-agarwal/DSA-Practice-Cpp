#include <iostream>
using namespace std;
int fact(int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive case(pure assumptions)
    //n!=n * (n-1)! smaller prblm and recursion will solve it
    //int ChotaFactorial = fact(n-1);

    //find the answer
    //int BadaFactorial = n * ChotaFactorial;
    //return BadaFactorial;
    return n*fact(n-1);
}
int main() {
    int n;
    cin>>n;

    cout<<fact(n)<<endl;
   return 0;
}
