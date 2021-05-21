
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
//find mid without using lengthLL
node* mid(node* head){
    if(head == NULL or head->next==NULL){
        return head;
    }
    node* slow=head,* fast=head->next; 
    //fast pointer is kept one step ahead because otherwise in 
    //case of even length of LL it will return mid+1 position
    while(fast and fast->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
    
}
void ReverseLL(node* &head){
    node* p=NULL , *c=head,*n;
    while(c){
        n = c->next;
        c->next = p;
        p=c;
        c=n;
    }
    head = p;
}
node* findlastKth(node* head,int k){
    //maintain k node gap btw slow and fast ptr
    //two ptr approach
    node* s=head;
    node* f=head;
    while(k--){f=f->next;} //fast is positioned at kth node from start

    while(f){
        s=s->next;
        f=f->next;
    }
    return s;
}
node* mergeLL(node* h1,node* h2){
    if(h1 == NULL){return h2;}
    if(h2 == NULL){return h1;}

    node* newHead = NULL;
    if((h1->data) < (h2->data)){
        newHead =h1;
        node* nexthead = mergeLL(h1->next,h2);
        newHead->next = nexthead;
    }else{
         newHead =h2;
        node* nexthead = mergeLL(h1,h2->next);
        newHead->next = nexthead;
        
    }
    
    return newHead;
}
node* mergeSort(node* head){
    //base case
    if(head and head->next){
        return head;
    }
    //divide by mid point
    node* m = mid(head);

    //divide
    node* a= head;
    node* b=m+1;
    m->next=NULL;

    //sort recursively 
    a = mergeSort(a);
    b= mergeSort(b);

    //merge two sorted LL
    node* n = mergeLL(a,b);
    return n;
}
node* bubbleSort(node* &head){
    node* c,*p,*n;
    int len = lengthLL(head);
    for(int i=1;i<len;i++){
        // n-1 iterations
        p = NULL;
        c=head;
        //swapping
        while(c and c->next){
            n = c->next;
            //head changes 
            if(c->data > n->data){
                    
                if(p == NULL){
                    c->next = n->next;
                    n->next = c;
                    head = p = n;
                }else{
                    //head doesnt change when prev != NULL
                    c->next=n->next;
                    n->next = c;
                    p->next =n;
                    p=n;
                }
            }else{
                p = c;
                //no swapping 
                c = c->next;
            }
         }
    }
}
int main(){
    node* head;
    head = NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,3);
    insertAtEnd(head,12);
    insertAtEnd(head,6);
    print(head);cout<<endl;

     bubbleSort(head);
    print(head);cout<<endl;
    // node* head1;
    // head1 = NULL;
    // insertAtEnd(head1,5);
    // insertAtEnd(head1,7);
    // insertAtEnd(head1,8);
    // insertAtEnd(head1,9);
    // print(head1);cout<<endl;
    

//print(head);cout<<endl;
    // cout<<"mid of LL1 "  <<mid(head)->data<<endl;
    // cout<<"mid of LL2 "  <<mid(head1)->data<<endl;
   // ReverseLL(head);
    //print(head);cout<<endl;
    
    //node* kthelem = findlastKth(head,2);
   // cout<<kthelem->data<<endl;
    // node* newHead = mergeLL(head, head1);
	// print(newHead);cout<<endl;
    // head = mergeSort(head);
    // print(head);
    	return 0;
}