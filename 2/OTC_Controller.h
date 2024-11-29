#pragma once
#include "Factory_employee.h"
#include "Conveyor.h"
#include "Garbage.h"
#include <iostream>
class OTC_Controller : Factory_employee
{
public:
	OTC_Controller(std::string first_name, std::string last_name, int age, double work_experience, std::string sex, int hours_worked, double salary, std::string health_status, std::string phone_number, std::string email, std::string work_schedule)
		: Factory_employee(first_name, last_name, age, work_experience, sex, hours_worked, salary, health_status, phone_number, email, work_schedule) {}
	void chek_details(Conveyor conveyor, Garbage garbage, Storage storage);
};

// проверяет детали на брак беря их из вектора деталей с конвейера