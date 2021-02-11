#include <iostream>
using namespace std;
int main() {
    //kadane's algo
    int cs=0,ms=0; //currentSum, MAxSum
    int t; //testcases
    cin>>t;
    while(t--){
        int cs=0,ms=0,n,arr[100005]; //ms can also be INT_MIN
        cin>>n ; 
        //number of element in array
        for(int i=0;i<n;i++){
            cin>>arr[i];
            cs=cs+arr[i]; //add elem to current sum
            if(cs<0){
                cs=0;
            }
            ms=max(ms,cs); 
        }
        cout<<ms<<endl; //print max sum
    }
    return 0;
}
