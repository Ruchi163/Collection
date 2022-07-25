#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int hr,min;
    cin>>hr>>min;
    double hrs=(hr*30)+(min*0.5);
    double mins=min*6;

    double time=abs(hrs-mins);
    if(time>180){
        time=360-time;
    }
    cout<<time;
}