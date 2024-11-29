#include "Spark_plugs.h"

Spark_plugs::Spark_plugs(std::string type, std::string insulator_ñolor, int heat_range, double nominal_voltage, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod)
	: Product(part_number, price, production_date, model, warrantyPeriod), type(type), insulator_ñolor(insulator_ñolor), heat_range(heat_range), nominal_voltage(nominal_voltage){}
