#pragma once
#include "Car.hpp"
#include "PetrolEngine.hpp"

class PetrolCar : virtual public Car
{
public:
    PetrolCar(PetrolEngine* engine);
    ~PetrolCar();
    void refill() override;
    void changeEngine(PetrolEngine* engine);
private:
    void refuel();
    PetrolEngine* engine_;
};

