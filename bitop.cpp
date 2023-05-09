#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    char op;
    cin>>op;
    switch(op){
        //AND operation
        case '&':
        cout<< "a&b\n" << (a&b) <<" " ;
        break;
         //OR operation
        case '|':
        cout<< "a|b\n" <<(a|b) <<" " ;
        break;
         //NOT operation
        case '~':
        cout<< "~a\n" <<(~a) <<" " ;
        cout<<"~b\n" <<(~b) <<" ";
        break;
         //XOR operation
        case '^':
        cout<< "a^b\n" <<(a^b) <<" " ;
        break;
    }cout<<endl;
    return 0;
}