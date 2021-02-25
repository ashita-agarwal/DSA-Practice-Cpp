#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int t; //testcases
    cin>>t;
    while(t--){
        long long int x,n;//constraints range long
        cin>>x>>n;
        //cout<<x%n<<endl;
        //will work without if stmt also
        if(x%n==0){
            cout<<0<<endl;
        }else{
            int p=x/n; //500/780
            cout<<min(x%n,(p+1)*n-x)<<endl;
        }
    }
   return 0;}
