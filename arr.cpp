#include<iostream>
using namespace std;
int main(){
    int number[15] = {0};
    cout<< "value at 7 index\n" << number[7] <<endl;
    int second[3] = {2, 4, 7};
    cout<< "value at 2 index\n" << second[2] << endl;
    int first[4] = {2, 3, 4, 5};
    int n = 5;
    //printing the array
    cout<< "printing the array"<<endl;
    for(int i = 0; i<=n; i++){
        cout<< first[i] <<" ";
    }
    cout << "evrthing is fine" << endl;
    return 0;
}