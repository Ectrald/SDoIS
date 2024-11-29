#pragma once
#include <string>
class Product
{
private:
	std::string part_number; 
	double price;
	std::string production_date;
	std::string model;
	bool defective;
	int warrantyPeriod;
public:
	void detail_broke();
	void detail_correct();
	bool get_info_about_detail_status();
	Product(std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod);
};

//std::string part_number, double price, std::string production_date, std::string model