#pragma once
#include "Spark_plugs.h"
#include "Car_glass.h"
#include "Brake_disc.h"
#include "vector"
class Storage
{
private:
	std::vector <Spark_plugs> spark_plugs;
	std::vector <Car_glass> car_glass;
	std::vector <Brake_disc> brake_disc;
public:
	void add_elems_from_conveyor(std::vector <Spark_plugs> spark_plugs, std::vector <Car_glass> car_glass, std::vector <Brake_disc> brake_disc);
};

// наполненость