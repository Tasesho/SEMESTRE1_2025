#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    map<int,vector<string>> map1;
   
    vector <string> palabras = {"sol","Luna", "mar", "cielo", "dias"};
   

    for(int i=0 ; i<palabras.size(); i++){
        map1[palabras[i].size()].push_back(palabras[i]);
       
       
        for(auto par: map1){
            cout<<par.first<<": ";
            for(int i=0; i<par.second.size(); i++){
                cout<<par.second[i]<<" - ";
            }
            cout<<endl;
       
        }
    }
    return 0;
}