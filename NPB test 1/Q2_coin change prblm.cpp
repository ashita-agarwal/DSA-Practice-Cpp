#include <iostream>
#include<set>
using namespace std;
int countCoinChange(int N,int* coins,int M,int i,multiset<int> ms){
    //base cases
    //1.
    if(N==0){ //coming down recursion tree N becomes 0
        //i have found a coin change
        cout<<"{ ";
        //auto--> multiset<int>::iterator
        for(auto it=ms.begin();it!=ms.end();it++){
            cout<<*it<<" ";
        }
        cout<<"}"<<endl;

        return 1; //found one way to change amount
    }
    //2.
    if(N<0){
        //i have a in-valid coin change
        return 0;
    }
    //3.
    if(N>0 && i==M){
        /*considered all coins and 
        no more coins left 
        but still left with some amount 
        --> no change configurations */
        return 0;
    }

    //standing at ith coin and hv to make a decision
    //what decision ?? --> include or not ith coin to the change configuration
    //recursive case

    //included ith coin
    ms.insert(coins[i]);
    int X =countCoinChange(N-coins[i],coins,M,i,ms);

    //nt include ith coin
    ms.erase(ms.lower_bound(coins[i]));
    int Y =countCoinChange(N,coins,M,i+1,ms);

    //return no of ways you can give change for amount N    
    return X+Y ;
}
int main() {

    int N; //read amount from user
    cin>>N;

    //read no of coins
    int M;
    cin>>M;

    int* coins = new int[M];
    for(int i=0;i<M;i++){
        cin>>coins[i];
    }
    multiset<int> ms; //contain configurations
    cout<<countCoinChange(N,coins,M,0,ms)<<endl; 
    //initially make decision for 0th coin to include or not

    return 0;
}
