#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0,x=1;
    while(n>0){
        int y=n%10;
        ans=ans+x*y;
        x=x*2;
        n=n/10;
    }
    cout<<ans;
}