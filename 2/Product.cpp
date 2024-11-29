#include "Product.h"

void Product::detail_broke() {
	this->defective = true;
}

void Product::detail_correct()
{
	this->defective = false;
}

bool Product::get_info_about_detail_status()
{
	return this->defective;
}

Product::Product(std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod)
	: part_number(part_number), price(price), production_date(production_date), model(model), warrantyPeriod(warrantyPeriod) {}
