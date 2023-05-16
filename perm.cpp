#include<iostream>
using namespace std;
fact(int n){
    int ans;
    ans = 1;
    for(int i = 1; i<=n; i++){
        ans = ans*i;
    }
    return ans;
}
nPr(int a, int b){
    int A,B;
    A = fact(a);
    B = fact(a-b);
    int nPr = A/B;
    return nPr;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<< "nPr(n,r)\n" <<(nPr(n,r))<<" ";
    return 0;
}