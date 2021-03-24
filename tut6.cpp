#include<iostream>
using namespace std;

int main(){

    int a=4,b=5;
    cout<<"operator in c++:"<<endl;
    cout<<"following in the type operator in c++"<<endl;
    //Arithmetic Operator
    cout<<"the value of a+b is "<<a+b<<endl;
    cout<<"the value of a-b is "<<a-b<<endl;
    cout<<"the value of a*b is "<<a*b<<endl;
    cout<<"the value of a/b is "<<a/b<<endl;
    cout<<"the value of a%b is "<<a%b<<endl;
    cout<<"the value of a++ is "<<a++<<endl;
    cout<<"the value of ++a is "<<++a<<endl;
    cout<<"the value of a-- is "<<a--<<endl;
    cout<<"the value of --a is "<<--a<<endl;
    cout<<endl;
    ////Assignment Operators is used to assigned value to variables//
    //int a=3,b=9;
    //char a ="a";

    //Comparison Operators
    cout<<"Following in the comparison operator in c++ "<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<endl;

    cout<<"Following the Logical Operator in c++"<<endl;
    cout<<"The value of this Logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this Logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this Logical not operator (!(a==b) is: "<<(!(a==b))<<endl;
    return 0;
}