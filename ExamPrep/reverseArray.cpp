#include<iostream>

using namespace std;

int main(){
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int sum=0;
    int sumEven=0,sumOdd=0;
    int n=sizeof(arr)/sizeof(arr[0]);

    int x=n-1,temp;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
    for(int i=0;i<n/2;i++){
       temp=arr[i];
       arr[i]=arr[x-i];
       arr[x-i]=temp;
       
    }
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
   
}