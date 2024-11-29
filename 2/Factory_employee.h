#pragma once
#include <string>
#include <vector>
class Factory_employee
{
protected:
	std::string first_name; // Имя
	std::string last_name; // Фамилия
	int age;
	double work_experience;
	std::string sex;
	int hours_worked;
	double salary;
	std::string health_status;
	std::string phone_number;
	std::string email;
	std::string work_schedule;
	//std::vector <std::string> emails;
public:
	Factory_employee(std::string first_name, std::string last_name, int age, double work_experience, std::string sex, int hours_worked, double salary, std::string health_status, std::string phone_number, std::string email, std::string work_schedule)
		: first_name(first_name), last_name(last_name), age(age), work_experience(work_experience), sex(sex), hours_worked(hours_worked),  salary(salary), health_status(health_status), phone_number(phone_number), email(email), work_schedule(work_schedule) {}
};