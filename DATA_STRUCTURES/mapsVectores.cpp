#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    map<int, vector<string>> grupos;  //se crea un 
    grupos[3].push_back("sol");
    grupos[3].push_back("ana");
    grupos[4].push_back("rana");
   
   
    vector<string> palabrasde3 =grupos[3];
   
   
   
    for(int i=0 ; i<palabrasde3.size(); i++){
        cout<<palabrasde3[i]<<endl;
    }
   

    return 0;
}