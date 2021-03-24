#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;
};
/* for a protected member:
                   public derivation   private derivation    protected derivation
  1. private        not inherited       not inherited         not inherited
  2. protected       protected          private               protected
  3. public          public             private               protected
*/
class Derived: protected Base{

};

int main(){
    Base b;
    Derived d;
    //cout<<d.a;  // wll not work since a is protected in both as well as deribved class

    return 0;
}