#include<iostream>
#include<vector>

using namespace std;

void display(vector<T> &v){
    cout<<"Displaying thsi vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< " ";
        cout<<v.at(i)<< " ";
    }
    cout<<endl;
    
}
int main(){
    vector<int> vec1; // zero length integer vector
    vector<char> vec2(4); // 4 element character vector
    //vector<char> vec3(vec2);// 4 element character vector from vec2
    vector<int> vec4(6, 13) // 6- element vector 3s
    display(vec4);

    int element, size=5;
    //cout<<"Enter the size of your vector"<<endl;
    //cin>>size;
    //for (int i = 0; i < 4; i++)
    //{
    //    cout<<"Enter an element to add this vector";
    //    cin>>element;
    //    vec1.push_back(element);
    //}
    //vec1.pop_back();
    //display(vec1);
    //vector<int> :: iterator iter = vec1.begin();
    //vec1.insert(iter+1,5, 566);
    display(vec1);
    
    return 0;
}