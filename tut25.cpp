#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            cout<<"Enter the id of employee "<<endl;
            cin>>id;
        }

        void getId(void){
            cout<<"The id of the employee "<<id<<endl;
        
        }
};

int main(){
    //Employee ravi,rohan,lovish,shruti;
    //ravi.setId();
    //ravi.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    

    return 0;
}