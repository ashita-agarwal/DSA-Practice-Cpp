#include <iostream>
using namespace std;
int fact(int a){ //int returns an int value
 int ans=1;

    for(int i=1;i<=a;i++){
        ans*=i;
    }
    
    return ans;
}
int main() {
    int n;
    cin>>n;
   int ans=fact(n); //fact returned ans and we store it in bucket
    cout<<ans<<endl;
    return 0;
}
