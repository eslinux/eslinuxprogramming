#ifndef CAR_H
#define CAR_H

#define CAR_MAX_SPEED 250

class Car
{
public:
    Car();
    virtual ~Car();

private:
    float fuel;
    int speed;

public:
    void reFuel(float fuel){
        this->fuel = fuel;
    }

    float getFuel(){
        return fuel;
    }

    void setSpeed(int speed);
    int getSpeed();

    void drive();
};

#endif // CAR_H
