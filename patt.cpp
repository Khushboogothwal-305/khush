#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        int var1 = 1;
        while(j<=(n-i+1)){
            cout<<var1<<" ";
            j++;
            var1 = var1 + 1;
        }cout<<endl;
        i++;
    }
    return 0;
}