/*
Function
inline func
default parameters



*/




#include<iostream>
using namespace std;
void sum(int a ,int b,int c=5){
    int s=a+b+c;
    cout<<s<<endl;
    // return s;
}
int sumA(int &a,int &b){
    int s=a+b;
    return s;
}


void abc(){
    auto int a;
    static int s;
    a=++s;
    cout<<a<<" "<<s<<endl;
    if(a<=3)
    abc();
    cout<<a<<" "<<s<<endl;
}
int main(){
    abc();
    abc();
    
}