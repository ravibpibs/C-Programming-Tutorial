#include<iostream>
using namespace std;

class Complex{
    int a ,b;
    public:
    // Creating a constuctor
    // Constructor is a special memeber function with same name as of the class.
    // it is used to intializer the objects of its class
    // it is automatically invoked whenever an object is created.
    Complex(void); // constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(void)  // ---> This is a defaultconstructor as it takes no parameters.
{
    a = 10;
    b = 20;
    //cout<<"Hello world";
}

int main(){
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}
/*  Charecterictics of constructors
1. it shoild be declared in the public section of the class.
2. ther are automatically invoked whenever object is created.
3. They cannot have return values and return types.
4. it can have default argument.
5. we cannot refer to their address

*/