#include<iostream>
using namespace std;
isfib(int a){
    if(a<=1){
        return a;
    }
    else{
        return isfib(a-1)+isfib(a-2);
    }
}
int main(){
    int n;
    cin>>n;
    cout<< "isfib(n)\n" << isfib(n) <<" "<<endl;
    return 0;
}