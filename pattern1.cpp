
#include<iostream>
using namespace std;

// * - - - - - - - - - - - - - - * 
// * * - - - - - - - - - - - - * * 
// * * * - - - - - - - - - - * * * 
// * * * * - - - - - - - - * * * * 
// * * * * * - - - - - - * * * * * 
// * * * * * * - - - - * * * * * * 
// * * * * * * * - - * * * * * * * 
// * * * * * * * * * * * * * * * * 


int main(){ 
  int n=8;
  
for(int i=0;i<n;i++){
    for(int a=0;a<=i;a++){
        cout<<"* ";
    }
    for(int b=n-i-1;b>0;b--){
        cout<<"- ";
    }
   for(int c=n-i-1;c>0;c--){
    cout<<"- ";
   }
   for(int d=0;d<=i;d++){
    cout<<"* ";
   }
    cout<<endl;
}
    
    return 0;

}