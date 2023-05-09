#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    char op;
    cin>>op;
    switch(op){
        //rightshift
        case '/':
        cout<< "a>>b\n" <<((a>>b)/2)<<" ";
        cout<< "a<<b\n" <<((a<<b)/2)<<" ";
        break;
        //leftshift
        case '+':
        cout<< "a>>b\n" <<(a>>b)+(a>>b)<<" ";
        cout<< "a<<b\n" <<(a<<b)+(a<<b)<<" ";
        break;
    }cout<<endl;
    return 0;
}