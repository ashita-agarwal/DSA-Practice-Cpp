#include<iostream>
#include<climits>
using namespace std;
int main(){
      int n;
      cin>>n;
      int max=INT_MIN; //store min value
      int a[n]={};
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
    for(int i=0;i<n;i++){
        //check every value if greater than max then update
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<max;
return 0;
}