
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
        cout<<head->data<<" ";
        head = head->next;
    }
}
void insertAtFront(node* &head,node* &tail,int d){
    node* n = new node(d);
    if(head == NULL){
        head=tail=n;
    }else{
        n->next = head;
        head = n;
    }
}
void insertAtEnd(node* &head,node* &tail,int d){
    node* n = new node(d);
    if(head == NULL){
        head=tail=n;
    }else{
        tail->next = n;
        tail = n;
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
void insertAtPos(node* &head,node* &tail,int d,int pos){
    if(pos==0){
        insertAtFront(head,tail,d);
    }else if(pos>= lengthLL(head)){insertAtEnd(head,tail,d);}
    else{
        node* temp = head;
        for(int i=1;i<pos;i++){
            temp = temp->next;
        }
        node* n = new node(d);
        n->next=temp->next;
        temp->next=n;
    }
}
bool search(node* head ,int key){
    while(head){
        if(head->data == key){
            return true;
            
        }
        head = head->next;
    }
    return false;
}
bool searchRec(node* head,int k){
    if(head == NULL){return false;}
    if(head->data == k){return true; }
    else{
       return  searchRec(head->next,k);
    }
   
}
void deleteAtFront(node* &head,node* &tail){
    if(head==NULL){ return;}
    if(head->next == NULL){delete head;
    head = tail =NULL; }
    else{
        node* temp = head;
        head = head->next;
        delete temp;
    }

}
void deleteAtEnd(node* &head, node* &tail){
    if(head == NULL){return;}
    if(head->next == NULL){ 
        delete head;
        head = tail = NULL;
    }else{
        node* temp = head;
        while(temp->next != tail){

            temp = temp->next;
        }
        delete tail;
        tail = temp;
        temp->next = NULL;
        
    }
}
void deleteAtpos(node* &head,node* &tail,int pos){
    if(pos==0){deleteAtFront(head,tail);}
    else if (pos == lengthLL(head) - 1) {
		deleteAtEnd(head, tail);
	}
	else if (pos >= lengthLL(head)) {
		return;
	}
    else{
        node* temp = head;
        for(int i=1;i<pos;i++){
            temp = temp->next;
        }
        node* t = temp->next;
        temp->next=t->next;
        delete t;

    }
}
int main(){
    node* head,* tail;
    head=tail=NULL;
insertAtFront(head,tail,4);
insertAtFront(head,tail,3);
insertAtFront(head,tail,2);
insertAtFront(head,tail,1);
insertAtEnd(head,tail,5);
insertAtFront(head,tail,0);
	print(head);
    cout<<endl;
    cout<<lengthLL(head);
    insertAtPos(head,tail,9,2);
    cout<<endl;
    print(head);
     cout<<endl;
    cout<<searchRec(head,3);
    deleteAtFront(head,tail);
     cout<<endl;
    print(head);
   deleteAtEnd(head,tail);
    cout<<endl;
    print(head);
    deleteAtEnd(head,tail);
    cout<<endl;
    print(head);
    deleteAtEnd(head,tail);
    cout<<endl;
    print(head);
     deleteAtpos(head,tail,0);
    cout<<endl;
    print(head);
	return 0;
}