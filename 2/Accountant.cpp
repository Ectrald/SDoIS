#include "Accountant.h"
Accountant::Accountant(std::string first_name, std::string last_name, int age, double work_experience, std::string sex, int hours_worked, double salary, std::string health_status, std::string phone_number, std::string email, std::string work_schedule, std::string education)
	: Factory_employee(first_name, last_name, age, work_experience, sex, hours_worked, salary, health_status, phone_number, email, work_schedule), education(education) {}
void Accountant::work(Accounting today_accounting, Archive archive, std::string password) {
	today_accounting.complite_today_accounting();
	if (archive.check_password(password)) archive.accounting_to_archive(today_accounting);
	std::cout << "Work is done";
}
double Accountant::salary_calculation(double salary, double prize, double fines) {
	return salary + prize - fines;
}
void Accountant::add_client(std::string& client) {
	this->clients.push_back(client);
	std::cout << "Client added";
}