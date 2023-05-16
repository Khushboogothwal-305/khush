#include<iostream>
using namespace std;
void printarray(int arr[], int size){
    cout<< "printing the array"<<endl;
    for(int i = 0; i<size; i++){
        cout<< arr[i] <<" ";
    }
    cout<< endl <<"printing is done" << endl;
}
int main(){
    int num[5] = { 0, 3, 5, 7, 11};
    printarray(num, 5);
    int second[10] = {0};
    printarray(second, 10);
    int first[15] = {2,3, 4};
    printarray(first, 15);
    return 0;
}