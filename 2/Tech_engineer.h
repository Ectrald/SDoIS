#pragma once
#include "Factory_employee.h"
#include <vector>
#include "Machine.h"
#include <iostream>
class Tech_engineer : Factory_employee
{
private:
	std::vector <Machine> machines_for_controle;
public:
	Tech_engineer(std::string first_name, std::string last_name, int age, double work_experience, std::string sex, int hours_worked, double salary, std::string health_status, std::string phone_number, std::string email, std::string work_schedule)
		: Factory_employee(first_name, last_name, age, work_experience, sex, hours_worked, salary, health_status, phone_number, email, work_schedule) {}
	void fix_machin(Machine machine);
	void scheduled_inspection_of_machines();
	void add_machine_to_controle(Machine machine);
};

