
#include<iostream>
using namespace std;

int f(int *a,int n){
    if(n<=0) return 0;
    else if(*a%2==0) return *a+f(a+1,n-1);
    else return *a-f(a+1,n-1);
}



int main(){ 
    int i=30,j=45;
    int *p,**q;
    p=&i;
    q=&p;
    cout<<i<<" "<<*p<<" "<<**q<<endl;
    **q=25;
    p=&j;
    cout<<i<<" "<<*p<<" "<<**q<<endl;
    // int a[]={12,7,13,4,11,6};
    // cout<<f(a,6);
    // int i;
    // int a[5]={10,20,30,40,50};
    // int *p;
    // p=a;
    // for(int i=0;i<5;i++){
    //     cout<<p[i]<<" ";
    // }
    return 0;

}