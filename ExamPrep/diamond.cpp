//            * *
//          * * * *
//        * * * * * *
//      * * * * * * * *
//    * * * * * * * * * *
//    * * * * * * * * * *
//      * * * * * * * *
//        * * * * * *
//          * * * *
//            * *



#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<"  ";
        }
        for(int x=0;x<=i;x++){
            cout<<" *";
        }
        for(int j=0;j<=i;j++){
            cout<<" *";
        }
       
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"  ";
        }
        
        for(int x=n-i-1;x>=0;x--){
            cout<<" *";
        }
        for(int j=0;j<=n-i-1;j++){
            cout<<" *";
        }
        cout<<endl;
    }

    
    
   }
