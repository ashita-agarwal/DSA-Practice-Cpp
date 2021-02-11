#include <iostream>
#include<climits>
using namespace std;
int main() {
    int n ,i,maxi=INT_MIN;
    cin>>n; //no of elem
    int a[1000000]; //size of array given in ques
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>maxi){
            maxi=a[i]; //taking max of all the elem given in array
        }
    }
    //int freq[maxi+1]; //frequency array of max(of all elem of array)+1
    int *freq =new int[maxi+1]; //dynamic memory allocation
    for(i=0;i<=maxi+1;++i){
        freq[i]=0;
    }
    for(i=0;i<n;i++){
        freq[a[i]]++; 
    }
    for(i=0;i<=maxi+1;i++){
        while(freq[i]!=0){
            cout<<i<<" ";
            freq[i]--; //if freq of 3 is 2 ,3 will be printed twice           
        }
        
    }
    cout<<endl;
     return 0;
}
