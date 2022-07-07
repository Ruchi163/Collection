
#include <stdio.h>
#include <iostream>
using namespace std;

class SP{
    private:
    struct node{
        string data;
        struct node *next;
    };
    struct node*top=NULL;
    
    public:
    void push(char ch);
    string pop();
    void display();
    int isBalanced(string ep);
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

string SP:: pop(){
    struct node*p=new node;
    string x="Z";
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

int SP::isBalanced(string ep){
    int n=sizeof(ep)/sizeof(ep[0]);
    for(int i=0;i<n;i++){
        if(ep[i]=='('){
            push('(');
        }
        else if(ep[i]==')'){
            if(top==NULL){
                return 0;
            }
            pop();
        }
    }
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}





int main()
{
    string ep="((a+b)*(c+d))";
    SP ob;
    cout<<" LIST HAS "<<ob.isBalanced(ep);
    
    return 0;
}
