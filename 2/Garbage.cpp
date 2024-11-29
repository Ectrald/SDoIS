#include "Garbage.h"

void Garbage::add_spark_plugs_to_garbage(Spark_plugs spark_plugs)
{
	this->spark_plugs.push_back(spark_plugs);
}

void Garbage::add_car_glass_to_garbage(Car_glass car_glass)
{
	this->car_glass.push_back(car_glass);
}

void Garbage::add_brake_disc_to_garbage(Brake_disc brake_disc)
{
	this->brake_disc.push_back(brake_disc);
}
