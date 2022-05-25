#pragma once
#include "Car.hpp"
#include "ElectricEngine.hpp"

class ElectricCar : virtual public Car
{
public:
    ElectricCar(ElectricEngine* engine);
    ~ElectricCar();
    void charge();
    void changeEngine(ElectricEngine* ee);
private:
    ElectricEngine* engine_;
};

