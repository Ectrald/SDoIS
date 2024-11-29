#include "Car_glass.h"

Car_glass::Car_glass(std::string glass_type, int tintLevel, double thickness, std::string material, bool impact_resistant, std::string edge_finish, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod)
	: Product(part_number, price, production_date, model, warrantyPeriod), glass_type(glass_type), tintLevel(tintLevel), thickness(thickness), material(material), impact_resistant(impact_resistant), edge_finish(edge_finish) {}