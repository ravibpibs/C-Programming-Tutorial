#include<iostream>
using namespace std;

int main(){
    // what is pointer----> data type which hold the address of other data types
    int a=5;
    int* b = &a;
    // & ------> (address of) operator
    cout<<"The address of b is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * ----->(value at) deferrence operator
    cout<<"The value at address b is "<<*b<<endl;

    //pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of c is "<<c<<endl;
    cout<<"The value of address c is "<<*c<<endl;
    cout<<"The value of adress value at  (address of c) is "<<**c<<endl;

    return 0;
}