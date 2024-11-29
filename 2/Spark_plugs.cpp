#include "Spark_plugs.h"

Spark_plugs::Spark_plugs(std::string type, std::string insulator_�olor, int heat_range, double nominal_voltage, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod)
	: Product(part_number, price, production_date, model, warrantyPeriod), type(type), insulator_�olor(insulator_�olor), heat_range(heat_range), nominal_voltage(nominal_voltage){}
