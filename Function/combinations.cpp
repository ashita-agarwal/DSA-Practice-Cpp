#include <iostream>
using namespace std;

int fact(int a){ //int returns an int value
    int ans=1;

    for(int i=1;i<=a;i++){
        ans*=i;
    }
    
    return ans;
}

//we r defining gn above main bcz nt doing frwd declaration

int nCr(int n,int r){
    //nCr --> combination
    //n,r,n-r
    int combinations = fact(n)/(fact(r)*fact(n-r));
    return combinations;
}
int main() {
    int n,r;
    cin>>n>>r;

    
    // int ans=fact(n); //fact returned ans and we store it in bucket
    // cout<<ans<<endl;

    cout<<nCr(n,r)<<endl;
    return 0;
}
