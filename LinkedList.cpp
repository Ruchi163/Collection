//This code contains LL insertion from start, end and from any position
//This code contains LL deletion from start, end and from any position

#include<iostream>
#include <stdio.h>

using namespace std;

class LL{
    private:
    struct Node{
        int data;
        struct Node *next;
    };
     struct Node *start;
    
    public:
   
    LL(){
       start=NULL;
    }
    void insert(int x);
    void insertPos(int x,int pos);
    void insertLast(int x);
    void deleteFirst();
    void deleteLast();
    void deletePos(int pos);
    void display();

};

void LL::insert(int x){
    struct Node *t=new Node;
        t->data=x;
        t->next=start;
        start=t;
}


void LL::insertPos(int x,int pos){
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


void LL::insertLast(int x){
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

void LL::deleteFirst(){
    start=start->next;
}

void LL:: deletePos(int pos){
    Node *ptr=start;
    for(int i=1;i<pos-1;i++){
        ptr=ptr->next;
    }
    ptr->next=ptr->next->next;
}


void LL::deleteLast(){
    Node *ptr;
    ptr=start;
    while(ptr->next->next!=NULL){ 
        ptr=ptr->next;
    }
    ptr->next=NULL;
}



void LL::display(){
    Node *ptr;
    ptr=start;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}



int main(){
    LL ob;
    ob.insert(10);
    ob.insert(20);
    ob.insert(30);
    ob.insert(40);
    ob.insertLast(100);
    ob.insertLast(200);
    ob.insertLast(300);
    ob.insertLast(400);
    ob.display();
    //ob.insertPos(-15,4);
    ob.deletePos(4);
    //ob.deleteLast();
   // ob.display();
    //ob.deleteFirst();
    ob.display();
    return 0;
}
