#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int sum=0;
    int n;
    cin>>n;
    int x=n;
    while(n>0){
        int d=n%10;
        sum=sum+pow(d,3);
        n=n/10;
    }
    if(sum==x){
        cout<<"Armstrong No."<<endl;
    }
    else{
        cout<<"Not an Armstrong No "<<endl;
    }

}