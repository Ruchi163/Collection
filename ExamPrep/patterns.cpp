// * 
// * * 
// * * * 
// * * * * 
// * * * * *

// Pattern 2 : 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

#include<iostream>
using namespace std;

int main(){
    int n=5;
    // cout<<"Pattern 2 : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}