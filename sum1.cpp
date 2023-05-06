#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum, i;
    sum = 0;
    i = 1;
    while(i<=n){
         sum = sum + i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}