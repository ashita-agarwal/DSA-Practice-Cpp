#include <iostream>
#include<bits/stdc++.h>
using namespace std;
////////////      LINKED STACK       //////////////////
class node{
   public:
   int data;
   node* next;
   node(int d){
       data = d;
       next = NULL;
   }
};
class Stack{
    public:
     node* head ;
     int cs; //current size
     Stack(){head = NULL; cs =0;}

     void push(int d){ 
         node* temp = new node(d);
         temp->next = head;
         head = temp;
         cs++;
         }
    void pop(){ 
        if(head==NULL){
        return;
        }
        node*temp = head;
        head = head->next;
         cs--;
        delete temp;
    }
    bool empty(){ return head==NULL ? true : false;}
    int top(){  return head->data;}
    int size(){ return cs;}
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
