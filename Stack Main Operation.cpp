/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

class SP{
    private:
    struct node{
        char data;
        struct node *next;
    };
    struct node*top=NULL;
    
    public:
    void push(char ch);
    char pop();
    void display();
};

void SP::push(char ch){
    struct node *t=new node;
    int x;
    if(t==NULL){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        t->data=ch;
        t->next=top;
        top=t;
    }
}

char SP:: pop(){
    struct node*p=new node;
    char x=-1;
    if(top==NULL){
        cout<<"Stack Empty"<<endl;
    }
    else{
        p=top;
        top=top->next;
        x=p->data;
    }
    return x;
}

void SP::display(){
    struct node *p;
    p=top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    
}


int main()
{
    SP ob;
    ob.push('a');
    ob.push('b');
    int c=ob.pop();
    ob.push('c');
    ob.push('d');
    ob.display();
    return 0;
}
