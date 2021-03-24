#include<iostream>
using namespace std;

template <class T>
class ravi{
        public:
        T data;
        ravi(T a){
            data = a;
        }
        void display();
};

template <class T>
void ravi<T>:: display(){
            cout<<data;
        }

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"I am templated func() "<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<"I am templated func1() "<<a<<endl;
}

int main(){ 

    //ravi<int> h(87);
    //cout<<h.data<<endl;
    //h.display();
    //func(4); // exact match takes the highest prriority
    func1(4);
    return 0;
}