#include "Brake_disc.h"

Brake_disc::Brake_disc(double diameter, double thickness, std::string material, std::string cooling_type, double weight, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod)
	: Product(part_number, price, production_date, model, warrantyPeriod), diameter(diameter), thickness(thickness), material(material), cooling_type(cooling_type), weight(weight) {}


