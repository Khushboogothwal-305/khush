#include<iostream>
using namespace std;
int main(){
    int n, i;
    cin>>n;
    i = 2;
    if(i<n){
        if(n%i == 0){
            cout<<"no prime"<<" ";
        }
        else{
            i = i + 1;
            cout<<"prime"<<" ";
        }
    }
    else{
        cout<<"prime"<<" ";
    }
}