#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"even";
        n++;
    }
    else{
        cout<<"odd";
    }
   cout<<endl;
   return 0;
}