 

#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node* next;
}*start=NULL;
struct Node *start2;

void display(){
    Node *ptr;
    ptr=start;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

void insert(int x){
    struct Node *t=new Node;
        t->data=x;
        t->next=start;
        start=t;
}

void insertNew(int x){
    struct Node *t=new Node;
        t->data=x;
        t->next=start2;
        start2=t;
}


void insertLast(int x){
    struct Node *t=new Node;
    Node *ptr;
    ptr=start;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=t;
        t->data=x;
        t->next=NULL;
}

void insertPos(int x,int pos){
    Node *ptr=start;
    struct Node *t=new Node;
    t->data=x;
    t->next=NULL;
    for(int i=1;i<pos-1;i++){
        ptr=ptr->next;
    }
    t->next=ptr->next;
    ptr->next=t;
}

void replaceNo(int x,int n){
    struct Node *t=new Node;
    Node *ptr;
    ptr=start;
    while(ptr->next!=NULL){
        if(ptr->data==x){
            ptr->data=n;
        }
        ptr=ptr->next;
    }   
}


void deleteNo(int x){
    struct Node *t=new Node;
    Node *ptr;
    int flag=1;
    ptr=start;
    if(x==ptr->data){
        start=start->next;
        flag=0;
    }
   
    while(ptr->next!=NULL){
        if(ptr->next->data==x){
            ptr->next=ptr->next->next;
            flag=0;
           
        }
        ptr=ptr->next;
    }
    if(flag==1) cout<<"No Number found to be deleted "<<endl;
}

void reverse3Ptr(){
    Node* curr=start;
    Node*prev=NULL;
    Node*nextt=NULL;

    while(curr!=NULL){
        nextt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextt;
    }
    start=prev;
}


void reverseList(){
    Node *ptr=start;
    Node*t=NULL;
    while(ptr!=NULL){
        insertNew(ptr->data);
        ptr=ptr->next;
    }
}

void check(){
    Node* ptr=start;
    int flag=1;
    Node* t=start2;
    while(ptr!=NULL){
        if(ptr->data!=t->data){
            cout<<"Not Pallindrome"<<endl;
            flag=0;
            break;
        }
        ptr=ptr->next;
        t=t->next;
    }
    if(flag==1)cout<<"Pallindrome"<<endl;
}


int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(40);
    insert(80);
    insert(90);
    insert(100);
    // insertLast(100);
    // insertLast(200);
    // insertPos(11,3);
    // insertPos(13,5);
    // replaceNo(20,-50); 
    // deleteNo(10);
    //reverseList();
    display();
    reverse3Ptr();
    //check();
    display();
    return 0;
}
