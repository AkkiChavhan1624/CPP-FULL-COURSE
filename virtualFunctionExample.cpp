#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string tittle;
    float rating;

public:
    CWH(string s, float r)
    {
        tittle = s;
        rating = r;
    }
    virtual void display() {}
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is amazing video with tittle " << tittle << endl;
        cout << " Rating:" << rating << "out 5 stars " << endl;
        cout << "Length of this video is " << videoLength;
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

    void display()
    {
        cout << "This is amazing text tutorial with tittle " << tittle << endl;
        cout << "Rating of this text tutorial is " << rating << endl;
        cout << "No of words in the text tutorial " << words << endl;
    }
};

int main()
{
    string tittle;
    float rating, vlen;
    int words;

    tittle = "Django tutorial";
    rating = 4.5;
    vlen = 3.30;
    CWHVideo djVideo(tittle, rating, vlen);

    tittle = "Django text tutorial";
    rating = 4.1;
    words = 399;
    CWHText DjText(tittle, words, rating);

    CWH *tuts[2];
    tuts[0]=&djVideo;
    tuts[1]=&DjText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
