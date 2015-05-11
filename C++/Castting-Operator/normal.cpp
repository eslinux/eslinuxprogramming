#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


using namespace std;

class Base
{
public:
    virtual void DoIt() = 0;    // pure virtual
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

    for( int n = 0; n < 10; ++n )
    {

        Base* base = CreateRandom();

        base->DoIt();

        Bar* bar = (Bar*)base;
        bar->BarIt();
        Foo* foo = (Foo*)base;
        foo->FooIt();

        delete base;
        base = NULL;

        printf("--------------NOMALY------------- \n");
    }
    return 0;
}




/*
$ g++ normal.cpp
$ ./a.out
Bar
baring It...
Fooing It...
--------------NOMALY-------------
Foo
baring It...
Fooing It...
--------------NOMALY-------------
Bar
baring It...
Fooing It...
--------------NOMALY-------------
Bar
baring It...
Fooing It...
--------------NOMALY-------------
Bar
baring It...
Fooing It...
--------------NOMALY-------------
Bar
baring It...
Fooing It...
--------------NOMALY-------------
Foo
baring It...
Fooing It...
--------------NOMALY-------------
Foo
baring It...
Fooing It...
--------------NOMALY-------------
Bar
baring It...
Fooing It...
--------------NOMALY-------------
Bar
baring It...
Fooing It...
--------------NOMALY-------------

*/
