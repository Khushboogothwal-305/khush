#include<iostream>
using namespace std;
int main(){
    int n, a,d;
    cin>>n>>a>>d;
    for(int i = 0; i<n; i++){
        cout<< a + i*d <<" ";
    }cout<<endl;
    return 0;
}