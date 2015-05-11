#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


using namespace std;

class Base
{
public:
    virtual void DoIt(){ cout << "Base \n"; }
    virtual ~Base() {}
};

class Foo : public Base
{
public:
    virtual void DoIt() { cout << "Foo \n"; }
    void FooIt() { cout << "Fooing It... \n"; }
};

class Bar : public Base
{
public :
    virtual void DoIt() { cout << "Bar \n"; }
    void BarIt() { cout << "baring It... \n"; }
};

Base* CreateRandom()
{
    if( (rand()%2) == 0 )
        return new Foo;
    else
        return new Bar;
}



//====================main==============================

int main()
{

    const Bar* bar = new Bar;
    Bar* bar1 = const_cast<Bar*>(bar);

    return 0;
}
