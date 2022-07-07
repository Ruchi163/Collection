

#include<iostream>
using namespace std;
void test(int *p);
void f(int *p,int *q);
int main(){
    // int j;
    // test(&j);
    // cout<<j<<endl;
int i=0,j=1;
f(&i,&j);
cout<<i<<" "<<j;
 
    return 0;

}

void test(int *p){
    *p=25;
}

void f(int *p,int *q){
    p=q;
    *p=2;
}

