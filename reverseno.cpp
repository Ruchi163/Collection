#include<iostream>

using namespace std;
int sum=0;
int rev(int x){
  static int temp,res;
  if(x>0){
    temp=x%10;
    res=res*10+temp;
    rev(x/10);
  }
  return res;
   
}



int main(){ 
  int x=1234;
  int c=rev(x);
cout<<c<<endl;
    return 0;

}