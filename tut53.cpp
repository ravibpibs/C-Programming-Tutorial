#include<iostream>
using namespace std;

class A{
    int a;
    public:
        //A & setData(int a){
        void setData(int a){
            this->a = a;
            // return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    // this is a keyword whichn is a pointer which point is to the object which invokes the member function
    A a;
    a.setData(4);
    a.getData();
    return 0;
}