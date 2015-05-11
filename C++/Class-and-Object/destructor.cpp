#include <iostream>
#include <stdio.h>
using namespace std;
 
 
#define CAR_MAX_SPEED 250

 
class Car
{
public:
    Car();
    ~Car();

private:
    float fuel;
    int speed;

public:
    void reFuel(float newfuel){
        fuel = newfuel;
    }

    float getFuel(){
        return fuel;
    }

    void setSpeed(int newSpedd);
    int getSpeed();

    void drive();
};
 


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

void Car::setSpeed(int newSpedd){
    speed = newSpedd;
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






// Main function for the program
int main( )
{
   
   
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
 
   return 0;
}
