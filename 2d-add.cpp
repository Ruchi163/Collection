
#include<iostream>
using namespace std;
int a;
int b;
void add(int x,int y){
    cout<<x+y;
}

void add(int x,int y,int z){
    cout<<x+y+z;
} 


int main(){ 
  add(2,3,4);
  cout<<endl;
  add(10,20);
  
  cout<<endl;
    return 0;

}