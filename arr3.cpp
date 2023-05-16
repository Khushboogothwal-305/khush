#include<iostream>
using namespace std;
int main(){
    int num[5];
    int first[15] = {2, 3, 4};
    int firstsize = sizeof(first)/sizeof(int);
    cout<< "size of first"<<" "<<firstsize <<endl;
    int numsize = sizeof(num)/sizeof(int);
    cout<< "size of num" <<" "<< numsize <<endl;
    return 0;
}