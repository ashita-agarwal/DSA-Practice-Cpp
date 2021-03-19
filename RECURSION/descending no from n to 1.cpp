#include <iostream>
using namespace std;
void desc(int n){
    //base case
    if (n==0 ){
        return ;
    }
    //recursive case
    cout<<n<<" ";
    
    //solve
     desc(n-1);
}
int main() {
    int n;
    cin>>n;

    desc(n);
   return 0;
}
