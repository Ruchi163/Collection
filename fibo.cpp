
#include<iostream>
using namespace std;

// 1 1 2 3 5 8 13 
int fibo(int n){
    if(n<=1){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}


int main(){ 
  
int x=fibo(5);
  
  cout<<x<<endl;
    return 0;

}