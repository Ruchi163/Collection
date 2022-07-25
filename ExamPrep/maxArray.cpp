#include<iostream>

using namespace std;

int main(){
    int arr[]={10,9,8,7,6,5,4,3,2,1,11};
    int max=0;
    int min=INT_MAX;
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"Maximum : "<<max<<endl;
    cout<<"Minimum : "<<min<<endl;
}