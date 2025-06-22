#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){

    vector<int> numeros= {1,2,2,3,3,3,4,1};                     
    stack<int>stack1;

    for(int i=0; i<numeros.size();i++){
        if(stack1.empty() or stack1.top() !=numeros[i]){
            stack1.push(numeros[i]);
        }
    }

    cout<<"elementos unicos, de arriba a abajo\n"<<endl;
    while(!stack1.empty()){
        cout<<stack1.top()<<endl;
        stack1.pop();
    }
    return 0;
}