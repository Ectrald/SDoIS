#include "Worker.h"

void Worker::craft_car_glass_on_the_machine(Machine machine, Conveyor conveyor, std::string glass_type, int tintLevel, double thickness, std::string material, bool impact_resistant, std::string edge_finish, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod)
{
	Car_glass detail = machine.create_car_glass(glass_type, tintLevel, thickness, material, impact_resistant, edge_finish, part_number, price, production_date, model, warrantyPeriod);
	int random_number = 1 + rand() % 100;
	if (random_number < 5) {
		detail.detail_broke();
	}
	else {
		detail.detail_correct();
	}
	conveyor.add_car_glass_to_coveyor(detail);
}

void Worker::craft_spark_plags_on_the_machine(Machine machine, Conveyor conveyor, std::string type, std::string insulator_ñolor, int heat_range, double nominal_voltage, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod)
{
	Spark_plugs detail = machine.create_spark_plug(type, insulator_ñolor, heat_range, nominal_voltage, part_number, price, production_date, model, warrantyPeriod);
	int random_number = 1 + rand() % 100;
	if (random_number < 5) {
		detail.detail_broke();
	}
	else {
		detail.detail_correct();
	}
	conveyor.add_spark_plugs_to_coveyor(detail);
}

void Worker::craft_brake_disc_on_the_machine(Machine machine, Conveyor conveyor, double diameter, double thickness, std::string material, std::string cooling_type, double weight, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod)
{
	Brake_disc detail = machine.create_brake_disc(diameter, thickness, material, cooling_type, weight, part_number, price, production_date, model, warrantyPeriod);
	int random_number = 1 + rand() % 100;
	if (random_number < 5) {
		detail.detail_broke();
	}
	else {
		detail.detail_correct();
	}
	conveyor.add_brake_disc_to_coveyor(detail);
}
