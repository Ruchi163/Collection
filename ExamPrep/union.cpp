#include<iostream>
using namespace std;

int main(){
    int n,m,k=0;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    int c[n+m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            c[k++]=arr1[i++];
        }
        else if(arr1[i]>arr2[j]){
            c[k++]=arr2[j++];
        }
        else{
            c[k++]=arr1[i++];
            j++;
        }
    }
    for(;i<n;i++){
        c[k++]=arr1[i];
    }
    for(;j<m;j++){
        c[k++]=arr2[j];
    }
    
    for(int i=0;i<k;i++){
        cout<<c[i]<<" ";
    }
}