#pragma once

class Car {
public:
    Car() : speed(0.1), wheels(0), price(0.2), modelYear(2000), fuelEfficiency(10.0) {}
    Car(float ss, int ww, float pp, int my, float fe);

    void klaxon(int);
    void setPrice(float x);
    float getPrice();

    float speed;
    void speedChange(float);
    int wheels;
    void setWheels(int);
    int getWheels();

    friend class Engineer;

protected:
    float price;
    void speedUp(float);
    void speedDown(float);

private:
    float fuelEfficiency;
    int modelYear;
};
