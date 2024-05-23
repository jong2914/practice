#pragma once
class Car {
public:
	Car() :speed(0.1), wheels(0), price(0.2), modelYear(2020) {};
	Car(float, int, float);
	void setPrice(float);
	float getPrice();

	void setmodelYear(int year);
	int getmodelYear();

	float speed;
	void speedChange(float);
	int wheels;
	void setWheels(int);
	int getWheels();
	void klaxon(int);
protected:
	float price;
	float maxspeed;
	void speedUp(float);
	void speedDown(float);
public:
	int modelYear;
private:
	float fuelefficiency;
};
