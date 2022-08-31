#include<iostream>
#include<string>
#include<map>
#include<list>
#include <bits/stdc++.h>
using namespace std;


vector<string> genderMale;
vector<string> genderFemale;
map<string,vector<string> > mapp;

class Finda{
    public:
    string name;
    string gender;
    string age;
    string religion;


   Finda(string name, string gender,string age, string religion){
        vector<string> ans;
        ans.push_back(name);
        ans.push_back(gender);
        ans.push_back(age);
        ans.push_back(religion);
        int x=(gender.compare("Male"));
        if(x==0){
            genderMale.push_back(name);
            }
        else{
            genderFemale.push_back(name);
        }
        mapp[name]=ans;
    }

    
};

void ifMale(){
    for(int j=0;j<4;j++){
            cout<<genderMale[j]<<endl;
        }
}
void ifFemale(){
    for(int j=0;j<4;j++){
            cout<<genderFemale[j]<<endl;
        }
}



void findinfo(string name){
       if( mapp.find(name)!=mapp.end()){
        int s=mapp[name].size();
        for(int j=0;j<s;j++){
            cout<<mapp[name][j]<<" ";
        }
       }

    }

int main(){
    Finda("Saem","Male","30","Hindu");
    Finda("Ritika","Female","31","Hindu");
    Finda("Ronit","Male","25","Muslim");
    Finda("Rao","Female","27","Hindu");
    Finda("Mukesh","Male","23","Sikh");
    //findinfo("ABP");
    cout<<"1 for Male 2 for Female : ";
    int n;
    cin>>n;
    if(n==1)ifMale();
    if(n==2)ifFemale();
    string name;
    cin>>name;
    findinfo(name);
    
}