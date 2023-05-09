#include<iostream>
using namespace std;
int main(){
    int i;
    cin>>i;
    int a;
    cin>>a;
    int sum;
    cout<< ++i <<" "<<endl;
    sum = a + (++i);
    cout<< sum <<" "<<endl;
    cout<< ++i <<" "<<endl;
    return 0;
}