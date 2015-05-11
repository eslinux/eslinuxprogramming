#include <iostream>
using namespace std;

/* BASE CLASS */
class Shape
{
public:
    void setValue(int pub, int pro, int pri){
        this->pub = pub;
        this->pro = pro;
        this->pri = pri;
    }

public:
    void setPublic(int pub)
    {
        this->pub = pub;
        cout << "setPublic: " << pub << endl;
    }
protected:
    void setProtected(int pro){
        this->pro = pro;
        cout << "setProtected: " << pro << endl;
    }

private:
    void setPrivate(int pri){
        this->pri = pri;
        cout << "setPrivate: " << pri << endl;
    }


public:
    int pub;

protected:
    int pro;

private:
    int pri;
};

/* DERIVED CLASS */
class Rectangle: public Shape
{

public:
    void print_info(){
        cout << "pub: " << pub << " pro: " << pro << endl;
        /* pri khong the duoc truy cap o lop ke thua vi la private */
    }
};

int main(void)
{
    Shape shape;
    Rectangle rect;

    shape.setValue(1,2,3);
    rect.setValue(3,2,1);

    /* OUTSIDE CLASS */
    rect.print_info();
    shape.setPublic(10); /* ok */
    //shape.setProtected(10); /* fail */
    //shape.setPrivate(10); /* fail */

    shape.pub = 10; /* ok */
    //shape.pro = 10; /* fail */
    //shape.pri = 10; /* fail */

    return 0;
}
