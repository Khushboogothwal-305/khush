#include<iostream>
using namespace std;
fact(int A){
    int ans;
    ans = 1;
    for(int i = 1; i<=A; i++){
        ans = ans*i;
    }
    return ans;
}
nPr(int a, int b){
    int A, B;
    A = fact(a);
    B = fact(a-b);
    int perm = A/B;
    return perm;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<< "nPr\n" << (nPr(n,r)) <<" ";
    return 0;
}