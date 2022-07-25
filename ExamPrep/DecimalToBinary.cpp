#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
vector<int> a;
    while(n>0){
        int d=n%2;
        n=n/2;
        a.push_back(d);
    }
    for(int i=a.size()-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
}