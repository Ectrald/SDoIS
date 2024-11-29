#include "Machine.h"
Machine::Machine(std::string machine_type, double power, std::string working_range, double weight, std::string dimensions, std::string construction_material, std::string control_type, std::string condition, std::string manufacturer, int year_of_manufacture)
	: machine_type(machine_type), power(power), working_range(working_range), weight(weight), dimensions(dimensions), construction_material(construction_material), control_type(control_type), condition(condition), manufacturer(manufacturer), year_of_manufacture(year_of_manufacture) {}
void Machine::condition_changing(std::string condition) {
	this->condition = condition;
}
std::string Machine::condition_check() {
	return this->condition;
}

Car_glass Machine::create_car_glass(std::string glass_type, int tintLevel, double thickness, std::string material, bool impact_resistant, std::string edge_finish, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod)
{
	return Car_glass(glass_type, tintLevel, thickness, material, impact_resistant, edge_finish, part_number, price, production_date, model, warrantyPeriod);
}

Brake_disc Machine::create_brake_disc(double diameter, double thickness, std::string material, std::string cooling_type, double weight, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod)
{
	return Brake_disc(diameter, thickness, material, cooling_type, weight, part_number, price, production_date, model, warrantyPeriod);
}

Spark_plugs Machine::create_spark_plug(std::string type, std::string insulator_ñolor, int heat_range, double nominal_voltage, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod)
{
	return Spark_plugs(type, insulator_ñolor, heat_range, nominal_voltage, part_number, price, production_date, model, warrantyPeriod);
}
