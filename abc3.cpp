#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        char ch = 'A'+i-1;
        while(j<=n){
            cout<< ch <<" ";
            j++;
            ch = ch + 1;
        }cout<<endl;
        i++;
    }
    return 0;
}