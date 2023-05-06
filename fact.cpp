#include<iostream>
using namespace std;
int main(){
    int n, num1, num2;
    cin>>n;
    num1 = 1;
    num2 = n;
    while(num1 < n){
        num2 = num1*num2;
        num1 = num1 + 1;
    }
    cout<<num2<<" "<<endl;
    return 0;
}