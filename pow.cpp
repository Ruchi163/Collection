
#include<iostream>
using namespace std;
int sum=0;
int pow(int x,int c){
    if(c==0){
        return 1;
    }
    else
    return x*pow(x,c-1);
 
   
}



int main(){ 
  int x=701234;
  rev(x);
cout<<endl;
    return 0;

}