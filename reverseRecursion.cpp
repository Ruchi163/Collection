#include<iostream>
using namespace std;

void reverse(int x){
    if(x<10){
        cout<<x<<" "<<endl;
    }
    else{
        cout<<x%10<<" ";
        x=x/10;
        
        reverse(x);
    }

}
int sum(int x){
    int d,sum=0;
    while(x>0){
        d=x%10;
        sum+=d;
        x=x/10;
    }
    return sum;
}

int main(){
    int x=2456;
    reverse(x);
    int y=sum(x);
    cout<<"Sum : "<<y<<endl;

}
