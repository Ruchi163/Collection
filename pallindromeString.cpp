#include<iostream>
using namespace std;

int main(){
    string s="madame";
    int x=s.size();
    int flag=0;
    for(int i=0;i<x/2;i++){
        if(s.at(i)==s.at(x-1-i)){
            flag=0;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
}