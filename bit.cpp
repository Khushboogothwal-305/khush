#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n != 0){
        int rem = n%2;
        cout<< rem <<" ";
        n = n/2;
    }cout<<endl;
    return 0;
}