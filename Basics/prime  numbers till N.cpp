#include <iostream>
using namespace std;
int main() {
    bool isPrime=true;
    int no=2,N,i=2;
    cin>>N;
    while(no<=N){
        while (i<no){
            if(no%2==0){
                bool isPrime=false;
                //break;
            }
            i=i + 1;
        }
        if (isPrime==true){
            cout<<no<<endl;
        }
    no=no+1;
    }
}
