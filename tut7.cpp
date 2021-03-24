#include<iostream>
using namespace std;
int c=45;

int main(){
    //******Build in data types*********
    //int a,b,c;
    //cout<<"Enter the value of a"<<endl;
    //cin>>a;
    //cout<<"Enter the value of b"<<endl;
    //cin>>b;
    //c=a+b;
    //cout<<"The value of a+b is "<<c<<endl;
    //cout<<"The global value of c is "<<::c<<endl;

    //****** Float double and long double Literal types*********
    //float d=65.5f;
    //long double e=65.5l;
    //cout<<"The size of 65.5 is "<<sizeof(65.5)<<endl;
    //cout<<"The size of 65.5f is "<<sizeof(65.5f)<<endl;
    //cout<<"The size of 65.5F is "<<sizeof(65.5F)<<endl;
    //cout<<"The size of 65.5l is "<<sizeof(65.5l)<<endl;
    //cout<<"The size of 65.5L is "<<sizeof(65.5L)<<endl;
    //cout<<"The value of d is "<<d<<endl;
    //cout<<"The value of e is "<<e<<endl;

    //******Reference Variable*********
    //shubham-->shubh---->suddu
    //float x=421;
    //float & y=x;
    //cout<<x<<endl;
    //cout<<y<<endl;

    //***** Typecasting*********
    int a=45;
    float b=45.6;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c=int(b);

    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;

    



    return 0;
}