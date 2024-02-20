#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool parenValid(string SomeString){
    stack<char> ParStack;
    for (int i=0; i<SomeString.size();i++){
        if (SomeString[i]=='{' || SomeString[i]=='[' || SomeString[i]=='('){
            ParStack.push(SomeString[i]);
            
        }else {
            if(SomeString[i]=='}' && ParStack.top()=='{'){
               ParStack.pop(); 
            }
            else if(SomeString[i]==')' && ParStack.top()=='('){
               ParStack.pop(); 
            }
            else if(SomeString[i]==']' && ParStack.top()=='['){
                ParStack.pop();
            }
            else{
                return false;
            }
        }
        
    }
    if (ParStack.empty()) return true;
    return false;

}

int main(){
    string Mystring = "{()()[]}";
    bool isValid = parenValid(Mystring);
    if(isValid) {
        cout<<"Valid"<<endl;
    }else{
        cout<<"Invalid"<<endl;
    }

}
