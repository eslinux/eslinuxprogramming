#include<iostream>
using namespace std;

class A
{
private:
    int r; // chieu rong
    int d; // chieu dai
public:
    A(int, int);
    friend class B; // khai bao lop B la ban cua A
};
A::A(int r, int d){
    this->r=r; this->d=d;
}

class B{
private:
    int r;
    int d;

public:
    B(int r, int d);
    void print_A_info(A t);
};

B::B(int r, int d){
    this->r = r;
    this->d = d;
}
void B::print_A_info(A t){
    cout<<"A: r = "<< t.r  << ", d= " << t.d << endl;
}

// ham main
int main()
{
    A rec(2, 5);
    B m(5, 2);
    m.print_A_info(rec);
    return 0;
}
