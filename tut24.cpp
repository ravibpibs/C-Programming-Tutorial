#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;

    public:
        void setData(void){
            cout<<"enter the id"<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
            
        }

        static void getCount(void){
            // cout<<id;//throws an error
            cout<<"The value of count is "<<count<<endl;
        }

};
int Employee:: count; //Default value is 0
int main(){
    Employee ravi,rohan,lovish;
    // 
    //ravi.id = 1;
    //ravi.count = 1// cannot do this as id and count are private
    ravi.setData();
    ravi.getData();
    Employee:: getCount();


    rohan.setData();
    rohan.getData();
    Employee:: getCount();

    lovish.setData();
    lovish.getData();
    Employee:: getCount();

    return 0;
}