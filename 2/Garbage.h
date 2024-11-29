#pragma once
#include <vector>
#include "Spark_plugs.h"
#include "Brake_disc.h"
#include "Car_glass.h"
class Garbage
{
private:
	std::vector <Spark_plugs> spark_plugs;
	std::vector <Car_glass> car_glass;
	std::vector <Brake_disc> brake_disc;
public:
	void add_spark_plugs_to_garbage(Spark_plugs spark_plugs);
	void add_car_glass_to_garbage(Car_glass car_glass);
	void add_brake_disc_to_garbage(Brake_disc brake_disc);
};

//векторы экемпляров деталей с браком