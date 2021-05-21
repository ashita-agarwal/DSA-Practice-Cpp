
#include<bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node* next;
	node(int d):data(d),next(NULL){};//def constructor
};
void print(node* head){
    while(head){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL";
}
//insert at end without using tail
void insertAtEnd(node* &head,int d){
    node* n = new node(d);
    if(head == NULL){
        head=n;
    }
    else{
        node* temp = head;
        while(temp->next){temp = temp->next;}
        temp->next = n;

    }
}
int lengthLL(node* head){
    int count=0;
    while(head ){
        
        head = head->next;
        count++;
    }
    return count;
}
void CreateCycle(node* head){
    node* temp = head;
    while(temp){temp = temp->next;}
    temp->next = head->next->next;
    //you can make a loop anywhere
}
bool iscyclic(node* head){
    node* s=head;
    node* f=head;
    while(f and f->next){
        f = f->next->next;
        s = s->next;
        if(f==s){return true;}
    }
    return false;
}
void breakCycle(node* head,node* f){ //f is the meeting point with s

    node* s = head;
    node* prev = head;
    while(prev->next != f){
        prev =prev->next;
    }
    while(f != s){
        prev = f; //so that we can make prev->next = NULL once f->next becomes null

        f = f->next;
        s = s->next;
    }
    prev->next = NULL;
}
int main(){
    node* head;
    head = NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,3);
    insertAtEnd(head,12);
    insertAtEnd(head,6);
    insertAtEnd(head,9);
    insertAtEnd(head,2);
    insertAtEnd(head,11);
    print(head);
    cout<<endl;

     
    	return 0;
}