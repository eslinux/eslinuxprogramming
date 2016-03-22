#include <iostream>
#include <stdio.h>
using namespace std;

struct mStruct{
    int data;
    void (*func)();
};
void print_info(){
    printf("struct method \n");
}
typedef struct mStruct mStruct;


class mClass{
public:
    int data;
    void func(){
        cout << "class method \n";
    }
};


int main () {

    mStruct structObj;
    structObj.data = 10;
    structObj.func = print_info;

    mClass classObj;
    classObj.data = 10;


    structObj.func();
    classObj.func();

    return 0;
}
