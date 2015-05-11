#include<iostream>
using namespace std;

class Rectangle;
class Circle;


class Rectangle
{
private:
    int w;
    int h;
public:
    Rectangle(int w, int h){
        this->w = w;
        this->h = h;
    }

    friend int Area(Rectangle); // khai bao ham ban Area
    friend void print_info(Rectangle rec, Circle cir);
};

class Circle{
private:
    float r;

public:
    Circle(float r){
        this->r = r;
    }

    friend void print_info(Rectangle rec, Circle cir);
};


// ham ban cua class Rectangle
int Area(Rectangle rec){
    return (rec.w*rec.h);
}

//ham ban cua ca Rectangle & Circle
void print_info(Rectangle rec, Circle cir){
    cout<<"rec.w:  " << rec.w <<" rec.h:  " << rec.h << endl;
    cout<<"cir.r:  " << cir.r << endl;
}



int main()
{
    Rectangle rec(2, 5);
    Circle cir(10);

    cout<<"Dien tich Rectangle:  "<< Area(rec) << endl;
    print_info(rec, cir);

    return 0;
}
