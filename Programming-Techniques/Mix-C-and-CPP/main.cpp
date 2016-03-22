#include <iostream>
#include "math_operator.h"
using namespace std;


int main(int argc, char **argv){

    float ret;

    add(4, 2, &ret);
    cout << "4 + 2 = " << ret <<endl;

    sub(4, 2, &ret);
    cout << "4 - 2 = " << ret <<endl;


    multi(4, 2, &ret);
    cout << "4 * 2 = " << ret <<endl;


    devision(4, 2, &ret);
    cout << "4 / 2 = " << ret <<endl;


    return 1;
}
