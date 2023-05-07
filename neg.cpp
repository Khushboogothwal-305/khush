#include<iostream>
using namespace std;
isbool(int a){
    if(a<0){
        cout<< 1 <<endl;
    }
    else{
        cout<< 0 <<endl;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    isbool(n);
    return 0;
}