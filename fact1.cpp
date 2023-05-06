#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num1, num2;
    num1 = 1;
    num2 = 1;
    while(num1<=n){
        num2 = num2*num1;
        num1 = num1 + 1;
    }
    cout<<num2<<endl;
    return 0;
}