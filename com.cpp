#include<iostream>
using namespace std;
fact(int a){
    int F = 1;
    for(int i = 1; i<=a; i++){
        F = F*i;
    }
    return F;
}
nCr(int a, int b){
    int A, B;
    A = fact(a);
    B = fact(b)*fact(a-b);
    int comb = A/B;
    return comb;
}
int main(){
    int n, r;
    cin>>n>>r;
    cout<< "nCr\n" <<(nCr(n,r))<<" ";
    return 0;
}