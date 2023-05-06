#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num1;
    num1 = 1;
    while(num1 <= n){
        cout<<num1<<" ";
        num1 = num1 + 2;
    }
    cout<<endl;
    return 0;
}