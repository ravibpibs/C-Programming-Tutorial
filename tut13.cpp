#include<iostream>
using namespace std;

int main(){
    int marks[] = {85,65,98,88,56};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    // you can chnage the value
    marks[2] = 100;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

    //int mathmarks[4];
    //mathmarks[0] = 45;
    //mathmarks[1] = 78;
    //mathmarks[2] = 76;
    //mathmarks[3] = 66;
    //cout<<"these are mathsmarks"<<endl;
    //cout<<mathmarks[0]<<endl;
    //cout<<mathmarks[1]<<endl;
    //cout<<mathmarks[2]<<endl;
    //cout<<mathmarks[3]<<endl;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    // pointer and arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    //cout<<"The value of *p is "<<*p<<endl;
    //cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    //cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    //cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    //cout<<"The value of *(p+4) is "<<*(p+4)<<endl;

    
   
    return 0;
}