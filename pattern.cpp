
#include<iostream>
using namespace std;

//    * 
//   * * 
//  * * * 



int main(){ 
  
    int n=7;
    int rows=n/2;
for(int i=0;i<n/2;i++){
    for(int x=0;x<rows;x++){
        cout<<"-";
    }
  
   for(int x=0;x<=i;x++){
    cout<<"* ";
   }
   cout<<endl;
rows--;
}
    
    return 0;

}