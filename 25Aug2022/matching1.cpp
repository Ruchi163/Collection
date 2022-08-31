#include <bits/stdc++.h>
using namespace std;


map<string,vector<string> > mp;

class finda{
    public:
    string name;
    int age;
    string gender;
    int contact;
    string email;
    string religion;
    
    finda(string name,string gender,int age,string religion,int contact,string email){

        vector<string>  ans;
        ans.push_back(name);
        ans.push_back(gender);
        ans.push_back(to_string(age));
        ans.push_back(religion);
        ans.push_back(to_string(contact));
        ans.push_back(email);
        mp[name] = ans;
        
    }
    
};

void findinfo(string name){
     
        if(mp.find(name)!=mp.end()){
            int s = mp[name].size();
            
            
            for(int j=0;j<s;j++){
                cout<<mp[name][j]<<" ";
            }            
        

    }   
}
int main()
{
    finda("saem","male",19,"religion",1,"email");
    finda("nishu","female",21,"religion",2,"email");
    finda("saem1","male",22,"religion",3,"email");
    finda("nishu1","female",23,"religion",4,"email");
    finda("saem2","male",24,"religion",5,"email");
    findinfo("nishu");

    
    
    
    return 0;
}