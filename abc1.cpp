#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    char var1 = 'a';
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<< var1 <<" ";
            j++;
        }cout<<endl;
        i++;
        var1++;
    }
    return 0;
}