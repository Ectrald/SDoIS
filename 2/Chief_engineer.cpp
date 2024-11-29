#include "Chief_engineer.h"

void Chief_engineer::add_subordiate(Worker worker)
{
	this->list_of_subordinates.push_back(worker);
	std::cout << "Subordinate added";
}

void Chief_engineer::give_exercise_to_create_brake_disc(Machine machine, Conveyor conveyor, double diameter, double thickness, std::string material, std::string cooling_type, double weight, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod)
{
	int random_number = rand() % this->list_of_subordinates.size();
	this->list_of_subordinates[random_number].craft_brake_disc_on_the_machine(machine, conveyor, diameter, thickness, material, cooling_type, weight, part_number, price, production_date, model, warrantyPeriod);
	std::cout << "Detail created";
}

void Chief_engineer::give_exercise_to_create_spark_plugs(Machine machine, Conveyor conveyor, std::string type, std::string insulator_ñolor, int heat_range, double nominal_voltage, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod)
{
	int random_number = rand() % this->list_of_subordinates.size();
	this->list_of_subordinates[random_number].craft_spark_plags_on_the_machine(machine, conveyor, type, insulator_ñolor, heat_range, nominal_voltage, part_number, price, production_date, model, warrantyPeriod);
	std::cout << "Detail created";
}

void Chief_engineer::give_exercise_to_create_car_glass(Machine machine, Conveyor conveyor, std::string glass_type, int tintLevel, double thickness, std::string material, bool impact_resistant, std::string edge_finish, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod)
{
	int random_number = rand() % this->list_of_subordinates.size();
	this->list_of_subordinates[random_number].craft_car_glass_on_the_machine(machine, conveyor, glass_type, tintLevel, thickness, material, impact_resistant, edge_finish, part_number, price, production_date, model, warrantyPeriod);
	std::cout << "Detail created";
}
