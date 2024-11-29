#include "Storage.h"

void Storage::add_elems_from_conveyor(std::vector<Spark_plugs> spark_plugs, std::vector<Car_glass> car_glass, std::vector<Brake_disc> brake_disc)
{
	this->brake_disc.insert(this->brake_disc.end(), brake_disc.begin(), brake_disc.end());
	this->spark_plugs.insert(this->spark_plugs.end(), spark_plugs.begin(), spark_plugs.end());
	this->car_glass.insert(this->car_glass.end(), car_glass.begin(), car_glass.end());
}
