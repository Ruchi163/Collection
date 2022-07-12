
#include<iostream>
#include<bits/stdc++.h>

using namespace std;




int main(){ 

int x=2;
    int n=5;
    int i=1;
    int sum=0;

    while(n>0){
        sum=sum+pow(x,i);
        i=i+2;
        n--;
    }
    return 0;

}