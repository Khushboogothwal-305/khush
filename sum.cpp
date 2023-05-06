#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int sum, mul, div, div1;
    sum = a + b;
    mul = a*b;
    div = a/b;
    div1 = a%b;
    if(a>b){
        int sub;
        sub = a - b;
        cout<<sub<<endl;
    }
    cout<<sum<<endl;
    cout<<mul<<endl;
    cout<<div<<endl;
    cout<<div1<<endl;
    return 0;
    
}