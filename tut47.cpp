#include<iostream>
#include<cmath>
using namespace std;

/* 
create 2 classes
    1. simple calculator- takes input of two numbers using a utiliy
    functions and perform *,+,/,-;
    2. sceintific calculator - takes input of two numbers using a
    utility function and perform any four scientific operations of
    your choice and displays operations of your choice and display the results
    using other functions

    create another class hybridcalculator and inherit it using these 2 clases.
    q.1 what type of inheritance are you using?--- multiple inheritance
    q.2 which mode of inheritance are you using?---- public simpleCalculator, public ScientificCalculator 
    q.3 cretae an object of hybridcalculator and display results of simple and 
    scientific calculator
    q.4 how is code reusability implemented
*/
class simpleCalculator{
    int a,b;
    public:
        void getDataSimple(){
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }
        void performOperationsSimple(){
            cout<<"The value of a + b is: "<<a + b<<endl;
            cout<<"The value of a - b is: "<<a - b<<endl;
            cout<<"The value of a * b is: "<<a * b<<endl;
            cout<<"The value of a / b is: "<<a / b<<endl;
        }

};

class ScientificCalculator{
    int a,b;
    public:
        void getDataScientific(){
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }
        void performOperationsScientifics(){
            cout<<"The value of cos(a) is: "<< cos(a) <<endl;
            cout<<"The value of sin(a) is: "<< sin(a) <<endl;
            cout<<"The value of exp(a) is: "<< exp(a) <<endl;
            cout<<"The value of tan(a) is: "<< tan(a) <<endl;
        }

};

class hybridCalculator : public simpleCalculator, public ScientificCalculator{

};

int main(){
    //simpleCalculator calc;
    //ScientificCalculator calc;
    //calc.getData();
    //calc.performOperations();
    hybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientifics();
    calc.getDataSimple();
    calc.performOperationsSimple();

    return 0;
}