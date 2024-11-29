#pragma once
#include "Factory_employee.h"
#include "Accounting.h"
#include "Archive.h"
#include <iostream>
class Accountant : Factory_employee
{
private:
	std::string education;
	std::vector <std::string> clients;
public:
	Accountant(std::string first_name, std::string last_name, int age, double work_experience, std::string sex, int hours_worked, double salary, std::string health_status, std::string phone_number, std::string email, std::string work_schedule, std::string education);
	void work(Accounting today_accounting, Archive archive, std::string password);
	double salary_calculation(double salary, double prize, double fines);
	void add_client(std::string& client);
};

