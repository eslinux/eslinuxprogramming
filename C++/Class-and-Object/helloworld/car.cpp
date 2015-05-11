#include "car.h"
#include <stdio.h>

#include <iostream>

using namespace std;

Car::Car()
{
    fuel = 0;
    speed = 0;
}


Car::~Car()
{
    fuel = 0;
    speed = 0;
}

void Car::setSpeed(int speed){
    this->speed = speed;
}

int Car::getSpeed(){
    return speed;
}

void Car::drive(){

    printf("fuel: %f \n", fuel);

    if(speed > CAR_MAX_SPEED){
        printf("speed: %d, Fast & Furious \n", speed);
    }else{
        printf("speed: %d, It is ok \n", speed);
    }
}
