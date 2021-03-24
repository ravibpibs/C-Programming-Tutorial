#include<iostream>
using namespace std;

int main(){
    int x=4;
    int *p=&x;
    int *q=p++;
    int r=p-q; 
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<r<<endl;
    

    return 0;
}