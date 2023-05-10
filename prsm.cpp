#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prod, sum;
    prod = 1;
    sum = 0;
    while(n != 0){
        int digit = n%10;
        prod = prod*digit;
        sum = sum+digit;
        n = n/10;
    }
    int answer = prod - sum;
    cout<< prod <<" "<<endl;
    cout<< sum <<" "<<endl;
    cout<< answer <<" "<<endl;
    return answer;
}