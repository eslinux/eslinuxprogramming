#include <iostream>

using namespace std;

// Base class
class Shape 
{
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

// Derived class
class Rectangle: public Shape
{
public:
    int setValue()
    {
        pub = 10;        //public
        pro = 5;         //protected

        setPublic(10);    //public
        setProtected(5);  //protected

        return 1;
    }
};

class Rectangle1: protected Shape
{
public:
    int setValue()
    {
        pub = 10;        //protected
        pro = 5;         //protected

        setPublic(10);    //protected
        setProtected(5);  //protected

        return 1;
    }
};

class Rectangle2: private Shape
{
public:
    int setValue()
    {
        pub = 10;        //private
        pro = 5;         //private

        setPublic(10);     //private
        setProtected(5);   //private

        return 1;
    }
};

int main(void)
{
    Rectangle  Rect;
    Rectangle1 Rect1;
    Rectangle2 Rect2;

    Rect.pub = 20;
    Rect.setPublic(10); //public
    Rect.setValue();

    //Rect1.setPublic(10); //become protected
    Rect1.setValue();

    //Rect2.setPublic(10); //become private
    Rect2.setValue();

    return 0;
}
