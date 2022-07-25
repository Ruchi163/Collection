
// #include<iostream>
// using namespace std;

// // 1 1 2 3 5 8 13 
// int fibo(int n){
//     if(n<=1){
//         return 1;
//     }
//     return fibo(n-1)+fibo(n-2);
// }

// int main(){ 
  
//     int x=fibo(5);
//     cout<<x<<endl;
//     return 0;

// }

#include<iostream>
using namespace std;

int fibo(int x){
    if(x==1 || x==0){
        return x;
    }
    return fibo(x-1)+fibo(x-2);
}


int main(){
    int y=fibo(5);
    for(int i=0;i<5;i++){
        int x=fibo(i);
        cout<<x<<" ";
    }
    cout<<y<<endl;
}