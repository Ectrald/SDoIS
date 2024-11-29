#pragma once
#include "Product.h"
class Spark_plugs : public Product
{
private:
	std::string type; // иридиевая, никелевая, платиновая
	std::string insulator_сolor; // Цвет изолятора свечи
	int heat_range; // Тепловой диапазон свечи зажигания
	double nominal_voltage; // Номинальное напряжение свечи зажигания
public:
	Spark_plugs(std::string type, std::string insulator_сolor, int heat_range, double nominal_voltage, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod);
};

