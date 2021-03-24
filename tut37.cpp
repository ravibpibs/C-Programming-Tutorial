#include <iostream>
using namespace std;

// Base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};
// Derived class syntax
/*
class {{derived-class}} : {{visibility-mode}} {{base-class-name}}
{
    class member/methods/etc...
}
1. default visibility mode is private
2. public visibility mode : public member of the base class becomes public members of the derived class
3. private visibility mode : public member of the base class becomes private member of the derive class
4. private members are never inherited.
*/
// Createing a programmer derived from employee base class
class programmer : public Employee
{
public:
    int languagecode;
    programmer(int inpId)
    {
        id = inpId;
        languagecode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee ravi(1), rohan(2);
    cout << ravi.salary << endl;
    cout << rohan.salary << endl;
    programmer skillf(10);
    cout << skillf.languagecode << endl;
    skillf.getData();
    return 0;
}