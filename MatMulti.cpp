#include<iostream>
using namespace std;

int main(){
    int r1,c1,r2,c2,k;
    cin>>r1>>c1;
    cin>>r2>>c2;

    if(c1!=r2)
    return 0;
    
    int a[r1][c1];
    int b[r2][c2];
    int mul[r1][c2];

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            mul[i][j]=0;
        }
    }
    for(int i = 0; i < r1; ++i)
        for(int j = 0; j < c2; ++j)
            for(k = 0; k < r2; ++k)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }


    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<mul[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}