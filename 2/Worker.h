#pragma once
//„ÓÚÓ‚
#include "Factory_employee.h"
#include "Machine.h"
#include "Conveyor.h"
#include "Garbage.h"
class Worker : Factory_employee
{
public:
	Worker(std::string first_name, std::string last_name, int age, double work_experience, std::string sex, int hours_worked, double salary, std::string health_status, std::string phone_number, std::string email, std::string work_schedule)
		: Factory_employee(first_name, last_name, age, work_experience, sex, hours_worked, salary, health_status, phone_number, email, work_schedule) {}
	void craft_car_glass_on_the_machine(Machine machine, Conveyor conveyor, std::string glass_type, int tintLevel, double thickness, std::string material, bool impact_resistant, std::string edge_finish, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod);
	void craft_spark_plags_on_the_machine(Machine machine, Conveyor conveyor, std::string type, std::string insulator_Òolor, int heat_range, double nominal_voltage, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod);
	void craft_brake_disc_on_the_machine(Machine machine, Conveyor conveyor, double diameter, double thickness, std::string material, std::string cooling_type, double weight, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod);
	
};

