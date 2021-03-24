#include<iostream>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display(){cout<<"bogus code";}
};

class CWHVideo: public CWH
{
    int videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl; 
        }
};

class CWHText: public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
    //    void display(){
    //        cout<<"This is an amazing video with title "<<title<<endl;
    //        cout<<"Rating of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
    //        cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
    //    }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    // far code video
    title = "Django";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    //djVideo.display();

    // far code with text
    title = "Django textual";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    djText.display();

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
// Rules for virtual functions
//1. They cannot be static
//2. They are accessed by object pointers
//3. Virtual functions can be a friend of another class
//4. A virtual function in base calss might not be used.
//5. iF as virtual function is defined in the base class, there  is no necessity of redfining it in derived class