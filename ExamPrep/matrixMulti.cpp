#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n][m];
    int arr2[n][m];
    int ans[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[i][j]=0;
            for(int k=0;k<m;k++){
                ans[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}