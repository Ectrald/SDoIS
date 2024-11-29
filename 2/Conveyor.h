#pragma once
#include <vector>
#include "Spark_plugs.h"
#include "Car_glass.h"
#include "Brake_disc.h"
#include "Storage.h"
class Conveyor
{
private:
	std::vector <Spark_plugs> spark_plugs;
	std::vector <Car_glass> car_glass;
	std::vector <Brake_disc> brake_disc;
public:
	void transport_to_storage(Storage storage);
	void add_spark_plugs_to_coveyor(Spark_plugs spark_plugs);
	void add_car_glass_to_coveyor(Car_glass car_glass);
	void add_brake_disc_to_coveyor(Brake_disc brake_disc);
	size_t num_of_spark_plugs();
	size_t num_of_car_glass();
	size_t num_of_brake_disc();
	Spark_plugs get_spark_plugs(size_t i);
	Car_glass get_car_glass(size_t i);
	Brake_disc get_brake_disc(size_t i);
	void remove_spark_plugs_from_conveyor(size_t i);
	void remove_brake_disc_from_conveyor(size_t i);
	void remove_car_glass_from_conveyor(size_t i);

};

//векторы деталей