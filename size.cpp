#include<iostream>
using namespace std;
int main(){
    int a = 12;
    cout<< a <<endl;
    char b = 'v';
    cout<< b <<endl;
    bool b1 = 0;
    cout<< b1 <<endl;
    float f1 = 0.234;
    cout<< f1 <<endl;
    double db = 12.356;
    cout<< db <<endl;
    int size1 = sizeof(b);
    int size2 = sizeof(b1);
    int size3 = sizeof(f1);
    int size4 = sizeof(db);
    int size5 = sizeof(a);
    cout<< sizeof(b) <<endl;
    cout<< sizeof(b1) <<endl;
    cout<< sizeof(f1) <<endl;
    cout<< sizeof(db) <<endl;
    cout<< sizeof(a) <<endl;
    return 0;
    
}