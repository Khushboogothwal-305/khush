#include<iostream>
using namespace std;
int main(){
    int n, sum, i;
    cin>>n;
    sum = 0;
    i = 1;
    while(i<=n){
        if(i%2 == 0){
            sum = sum + i;
        }
        i = i + 1;
    }
    cout<<sum<<" "<<endl;
    return 0;
}