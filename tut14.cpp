#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eid;
    char favChar;
    float salary;
} ep;

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};



int main(){
    enum meal{breakfast, lunch, dinner};
    meal m1 = lunch;
    cout<<(m1==2);
    //cout<<breakfast<<endl;
    //cout<<lunch<<endl;
    //cout<<dinner<<endl;
    //ep ravi;
    //union money m1;
    //m1.rice = 34;
    //m1.car = 'c';
    //cout<<m1.car<<endl;
    //ravi.eid = 1;
    //ravi.favChar = 'c';
    //ravi.salary = 450000;
    //cout<<"The value is "<<ravi.salary<<endl;
    //cout<<"The value is "<<ravi.favChar<<endl;
    //cout<<"The value is "<<ravi.eid<<endl;

    return 0;
}