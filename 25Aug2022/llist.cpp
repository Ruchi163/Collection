/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node* next;
}*start=NULL;

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

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insertLast(100);
    insertLast(200);
    display();
    return 0;
}
