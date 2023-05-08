#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    char var1 = 'A';
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<< var1 <<" ";
            j++;
            var1++;
        }cout<<endl;
        i++;
    }
    return 0;
}