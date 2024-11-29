#pragma once
#include "Product.h"
class Car_glass : public Product
{
private:
    std::string glass_type; // Тип стекла
    int tintLevel; // Степень тонировки
    double thickness; // Толщина стекла
    std::string material; // Материал стекла
    bool impact_resistant; // Устойчивость к ударам
    std::string edge_finish; // Обработка краев
public:
    Car_glass(std::string glass_type, int tintLevel, double thickness, std::string material, bool impact_resistant, std::string edge_finish, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod);
};

