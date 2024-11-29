#pragma once
#include <string>
#include "Brake_disc.h"
#include "Spark_plugs.h"
#include "Car_glass.h"
class Machine
{
private:
    std::string machine_type; // ��� ������
    double power; // ��������
    std::string working_range; // ������� ��������
    double weight; // ���
    std::string dimensions; // �������
    std::string construction_material; // �������� �����������
    std::string control_type; // ��� ����������
    std::string condition; // ���������
    std::string manufacturer; // �������������
    int year_of_manufacture; // ��� �������
public:
    Machine(std::string machine_type, double power, std::string working_range, double weight, std::string dimensions, std::string construction_material, std::string control_type, std::string condition, std::string manufacturer, int year_of_manufacture);
    void condition_changing(std::string condition);
    std::string condition_check();
    virtual Car_glass create_car_glass(std::string glass_type, int tintLevel, double thickness, std::string material, bool impact_resistant, std::string edge_finish, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod);
    virtual Brake_disc create_brake_disc(double diameter, double thickness, std::string material, std::string cooling_type, double weight, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod);
    virtual Spark_plugs create_spark_plug(std::string type, std::string insulator_�olor, int heat_range, double nominal_voltage, std::string part_number, double price, std::string production_date, std::string model, int warrantyPeriod);
};

//������
