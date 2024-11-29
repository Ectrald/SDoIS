#pragma once
#include "Factory_employee.h"
#include <vector>
#include "Worker.h"
#include <iostream>
class Chief_engineer : Factory_employee
{
private:
	std::string engineering_license; // Номер лицензии главного инженера
	std::vector <Worker> list_of_subordinates;
public:
	Chief_engineer (std::string first_name, std::string last_name, int age, double work_experience, std::string sex, int hours_worked, double salary, std::string health_status, std::string phone_number, std::string email, std::string work_schedule) : Factory_employee(first_name, last_name, age, work_experience, sex, hours_worked, salary, health_status, phone_number, email, work_schedule) {}
	virtual void add_subordiate(Worker worker);
	virtual void give_exercise_to_create_brake_disc(Machine machine, Conveyor conveyor, double diameter, double thickness, std::string material, std::string cooling_type, double weight, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod);
	virtual void give_exercise_to_create_spark_plugs(Machine machine, Conveyor conveyor, std::string type, std::string insulator_сolor, int heat_range, double nominal_voltage, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod);
	virtual void give_exercise_to_create_car_glass(Machine machine, Conveyor conveyor, std::string glass_type, int tintLevel, double thickness, std::string material, bool impact_resistant, std::string edge_finish, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod);
};


