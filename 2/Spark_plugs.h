#pragma once
#include "Product.h"
class Spark_plugs : public Product
{
private:
	std::string type; // ���������, ���������, ����������
	std::string insulator_�olor; // ���� ��������� �����
	int heat_range; // �������� �������� ����� ���������
	double nominal_voltage; // ����������� ���������� ����� ���������
public:
	Spark_plugs(std::string type, std::string insulator_�olor, int heat_range, double nominal_voltage, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod);
};

