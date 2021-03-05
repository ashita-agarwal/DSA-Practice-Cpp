#include<iostream>
using namespace std;
int main(){
       int n;
       cin>>n;
       //KERINGHAN ALGORITHM TO FING SET BITS
       int count=0;

       while(n!=0){
           n=n&(n-1);
           count++; //set bits count
       }
       cout<<count;
    //    int count_set=0,count_unset=0;
    //    //start from LSB
    //    while(n!=0){ //till num becomes zero
    //        if((n&1)==1){
    //            //if ones are there
    //            count_set++;
    //        }else{
    //            //if zeroes are there
    //            count_unset++;
    //        }
    //        n=n>>1; //right shift to discard last bit
    //    }
    //    cout<<count_unset<<" "<<count_set;
return 0;
}