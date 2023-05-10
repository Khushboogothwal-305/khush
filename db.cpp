#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n != 0){
        int rem = n/2;
        cout<< rem <<"\n";
        n = n/10;
    }cout<<endl;
    return 0;
}