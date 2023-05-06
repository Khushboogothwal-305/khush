#include<iostream>
using namespace std;
int main(){
    int n, sum;
    cin>>n;
    sum = 0;
    signed int i;
    i = 1;
    while(i<=n){
        if(i%2 != 0){
            sum = sum + i;
        }
        i++;
    }
    cout<<sum<<endl;
    return 0;
}