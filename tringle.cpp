#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a+b>c){
        cout<<"valid tringle";
    }
    else if(b+c>a){
        cout<<"valid tringle";
    }
    else if(c+a>b){
        cout<<"valid tringle";
    }
    else{
        cout<<"invalid";
    }
    cout<<endl;
    return 0;
    
}