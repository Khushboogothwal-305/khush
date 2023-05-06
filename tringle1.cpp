#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a+b>c){
        cout<<"valid tringle\n";
    }
    else{
        cout<<"invalid\n";
    }
    if(b+c>a){
        cout<<"valid tringle\n";
    }
    else{
        cout<<"invalid\n";
    }
    if(c+a>b){
        cout<<"valid tringle\n";
    }
    else{
        cout<<"invalid\n";
    }
    cout<<endl;
    return 0;
    
}