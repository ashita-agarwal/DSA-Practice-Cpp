#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Stack{
    public: 
    vector<int> v;

    void push(int d){ v.push_back(d);}
    void pop(){ v.pop_back();}
    bool empty(){ return v.size()==0 ? true : false;}
    int top(){  return v[v.size()-1];}
    int size(){ return v.size();}
};

int main() {
   Stack s;
   s.push(1);
 s.push(2);
 s.push(3);
 while(!s.empty()){
     cout<<s.top()<<endl;
     s.pop();
 }
 return 0;
}
