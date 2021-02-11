#include <iostream>
#include<climits>
using namespace std;
int main() {
    int fn=INT_MIN; //first num
    int sn=INT_MIN; //second num
    int tn=INT_MIN; //third num
    int a[1000]; //array created 
    int n; //no of elem in array
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>fn){
            tn=sn;
            sn=fn;
            fn=a[i];
        }else if(a[i]>sn){
            tn=sn;
            sn=a[i];
        }else if(a[i]>tn){
            tn=a[i];
        }
        
    }
    cout<<tn<<" "<<sn<<" "<<fn;
    return 0;
}
