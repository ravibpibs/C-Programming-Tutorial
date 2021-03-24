#include<iostream>
using namespace std;
int main(){
    //cout<<"This is 9th tutorial"<<endl;
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    // Selection control if-else-if-else
   //if((age<18) && (age>0)){
   //    cout<<"you cant come in my party"<<endl;
   //}
   //else if(age==18){
   //    cout<<"You are a kid and you will get a kid pass to come my party"<<endl;
   //}
   //else if(age<1){
   //    cout<<"You are not yet born"<<endl;
   //}
   //else {
   //    cout<<"You can come my party"<<endl;
   //}

   // Selection control structure switch case ststement //
   switch (age)
   {
   case 18:
       cout<<"you are 18"<<endl;
       break;
   case 22:
       cout<<"You are 22"<<endl;
       break;
   case 2:
       cout<<"You are 2"<<endl;
       break;
   default:
       cout<<"No Special cases"<<endl;
       break;
   }
   cout<<"Done with switch cases"<<endl;
    return 0;
}