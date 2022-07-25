#include<iostream>

using namespace std;

int main(){
    int arr[]={10,9,8,7,6,5,4,3,2,1,11};
    int sum=0;
    int sumEven=0,sumOdd=0;
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(arr[i]%2==0){
            sumEven+=arr[i];
        }
        else{
            sumOdd+=arr[i];
        }
    }
    cout<<"Sum : "<<sum<<endl;
    cout<<"Sum Even : "<<sumEven<<endl;
    cout<<"Sum Odd : "<<sumOdd<<endl;
   
}