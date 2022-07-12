
#include<iostream>
using namespace std;

//       A 
//     A B A 
//   A B C B A 
// A B C D C B A 

int main(){ 
  
 int n=4;
int a,b;
 for(int i=0;i<n;i++){
     a=65;
     b=64+i;
     for(int w=n-i-1;w>0;w--){
        cout<<"  ";
     }
    for(int x=0;x<=i;x++){
        cout<<(char)a<<" ";
        a++;
    }
    for(int c=0;c<i;c++){
     
        cout<<(char)b<<" ";
        b--;
    }
    cout<<endl;
 }
    
    return 0;

}