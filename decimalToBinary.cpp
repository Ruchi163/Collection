
#include<iostream>
#include<vector>
using namespace std;


int main(){ 
int x=50;
int sum=0;
vector<int> arr;

while(x>0){
    int d=x%2;
    arr.push_back(d);
   
    x=x/2;

}
for(int i=arr.size()-1;i>=0;i--)
{
    cout<<arr[i]<<" ";
}
  
    return 0;

}