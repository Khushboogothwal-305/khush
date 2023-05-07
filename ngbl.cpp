#include<iostream>
using namespace std;
isbool(int a){
    if(a<0){
        cout<< 1 <<endl;
    }
    else{
        cout<< 0 << endl;
    }
    return 0;
}
int main(){
    int n, i, sum;
    cin>>n;
    sum = 0;
    i = 1;
    while(i<=n){
        sum = sum + i;
        i = i + 2;
    }isbool(sum);
    return 0;
}