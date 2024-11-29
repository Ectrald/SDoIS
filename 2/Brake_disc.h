#pragma once
#include "Product.h"
class Brake_disc : public Product
{
private:
    double diameter; // Диаметр диска
    double thickness; // Толщина диска
    std::string material; // Материал диска
    std::string cooling_type; // Тип охлаждения
    double weight; // Вес диска
public:
    Brake_disc(double diameter, double thickness, std::string material, std::string cooling_type, double weight, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod);
};

