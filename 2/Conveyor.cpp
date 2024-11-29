#include "Conveyor.h"

void Conveyor::transport_to_storage(Storage storage)
{
	storage.add_elems_from_conveyor(this->spark_plugs, this->car_glass, this->brake_disc);
	this->brake_disc.clear();
	this->car_glass.clear();
	this->spark_plugs.clear();
}

void Conveyor::add_spark_plugs_to_coveyor(Spark_plugs spark_plugs)
{
	this->spark_plugs.push_back(spark_plugs);
}

void Conveyor::add_car_glass_to_coveyor(Car_glass car_glass)
{
	this->car_glass.push_back(car_glass);
}

void Conveyor::add_brake_disc_to_coveyor(Brake_disc brake_disc)
{
	this->brake_disc.push_back(brake_disc);
}

size_t Conveyor::num_of_spark_plugs()
{
	return this->spark_plugs.size();
}

size_t Conveyor::num_of_car_glass()
{
	return this->car_glass.size();
}

size_t Conveyor::num_of_brake_disc()
{
	return this->brake_disc.size();
}

Spark_plugs Conveyor::get_spark_plugs(size_t i)
{
	return this->spark_plugs[i];
}

Car_glass Conveyor::get_car_glass(size_t i)
{
	return this->car_glass[i];
}

Brake_disc Conveyor::get_brake_disc(size_t i)
{
	return this->brake_disc[i];
}

void Conveyor::remove_spark_plugs_from_conveyor(size_t i)
{
	this->spark_plugs.erase(this->spark_plugs.begin() + i);
}

void Conveyor::remove_brake_disc_from_conveyor(size_t i)
{
	this->brake_disc.erase(this->brake_disc.begin() + i);
}

void Conveyor::remove_car_glass_from_conveyor(size_t i)
{
	this->car_glass.erase(this->car_glass.begin() + i);
}

