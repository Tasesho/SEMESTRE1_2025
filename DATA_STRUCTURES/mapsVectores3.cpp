/*Crea un map<string, vector<string>> para almacenar números de teléfono
de distintas personas.
Cada persona puede tener varios números.*/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    map<string, vector<string>> ListaTel;
    ListaTel["Benjamin"].push_back("934583996");
    ListaTel["Benjamin"].push_back("911122234");
    ListaTel["Maria"].push_back("933344454");
    ListaTel["Maria"].push_back("911320874");



    vector<string> Benjamin = ListaTel["Benjamin"];
    for(int i = 0; i < Benjamin.size(); i++){
        cout <<"Numeros de Benjamin"<< endl;
        cout << Benjamin[i] << endl;
    }



    vector<string> Maria = ListaTel["Maria"];
    for(int i = 0; i < Maria.size(); i++){
        cout <<"Numeros de Maria"<< endl;
        cout << Maria[i] << endl;
    }




    return 0;
}