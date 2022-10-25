#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()=0;//Do nothing function->purevirtual function(Exist to be override)
};//Pure virtual function is used to create abstract class
//Abstract class is simple a class by using which new class will be made
class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display(void)
    {
        cout << "This is title : " << title << endl;
        cout << "Ratings : " << rating << " out of 5 stars" << endl;
        cout << "Length of video is : " << videoLength << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display(void)
    {
        cout << "This is title : " << title << endl;
        cout << "Ratings : " << rating << " out of 5 stars" << endl;
        cout <<"No of words in this text tutorial is : "<<words<<endl;
    }
};
int main(){
    string title;
    float rating,vlen;
    int words;

    title="Django tutorial";
    vlen=4.56;
    rating=4.89;
    CWHVideo djVideo(title,rating,vlen);
    // djVideo.display();

    title="Django tutorial text";
    words=420;
    rating=4.88;
    CWHText djText(title,rating,words);
    // djText.display();

    CWH* tuts[2];
    tuts[0]=&djVideo;
    tuts[1]=&djText;
    tuts[0]->display();
    tuts[1]->display();

}
/*
Rules for virtual function
    1.They cannot be static
    2.They are accessed using pointer
    3.virtual function can be a friend of another class
    4.A virtual Function in base class might not be used
    5.A virtual function is defined in base class,there are no necessity of redifining it

*/