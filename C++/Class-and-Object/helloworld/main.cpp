#include <iostream>
#include "car.h"
#include <stdio.h>
using namespace std;
int main(int argc, char **argv){
#if 0
    Car car1;
    Car car2;

    car1.reFuel(100);
    car2.reFuel(150);

    car1.setSpeed(150);
    car2.setSpeed(270);

    printf("car1 drive \n");
    car1.drive();
    printf("car2 drive \n");
    car2.drive();

#else
    Car *car1 = NULL;
    Car *car2 = NULL;

    car1 = new Car();
    car2 = new Car();

    car1->reFuel(100);
    car2->reFuel(150);

    car1->setSpeed(150);
    car2->setSpeed(270);

    printf("car1 drive \n");
    car1->drive();
    printf("car2 drive \n");
    car2->drive();


    delete car1;
    delete car2;
#endif
    return 1;
}
