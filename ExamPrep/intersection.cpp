#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];

    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int index1,index2;
    index1=index2=0;

    while(n>index1 && m>index2){

        if(arr1[index1]==arr2[index2]){
            cout<<arr1[index1]<<" ";
            index1++;
            index2++;
        }
        else if(arr1[index1]<arr2[index2]){
            index1++;
        }
        else{
            index2++;
        }
        
    }






}