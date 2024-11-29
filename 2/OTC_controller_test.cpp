#include <gtest/gtest.h>;
#include "OTC_Controller.h"
#include "Worker.h"
#include "Machine.h"
#include "Chief_engineer.h"
#include "Garbage.h"
#include "Storage.h"
TEST(OTC_controller_tests, Check_details) {
	Worker worker1("����", "������", 30, 5.0, "�������", 40, 50000, "������",
		"+79001234567", "ivan@example.com", "��-��, 9-18");
	Worker worker2("����", "������", 30, 5.0, "�������", 40, 50000, "������",
		"+79001234567", "ivan@example.com", "��-��, 9-18");
	Chief_engineer chief_engineer("����", "������", 30, 5.0, "�������", 40, 50000, "������",
		"+79001234567", "ivan@example.com", "��-��, 9-18");
	chief_engineer.add_subordiate(worker1);
	chief_engineer.add_subordiate(worker2);
	Conveyor conveyor;
	Garbage garbage;
	Machine machine("������ ��� ��������� �������", 75.0, "0-10 ��", 1200.0, "2x1.5x1.5 �",
		"��������", "��������������", "�����", "������������� �", 2023);
	chief_engineer.give_exercise_to_create_brake_disc(machine, conveyor, 30.0, 2.5, "�����", "����������",
		8.0, "BD-12345", 1500.0,
		"2024-11-01", "������ X", 24);
	chief_engineer.give_exercise_to_create_spark_plugs(machine, conveyor, "�����������", "�����", 5,
		12.0, "SP-98765", 800.0,
		"2024-11-01", "������ Z", 24);
	chief_engineer.give_exercise_to_create_car_glass(machine, conveyor, "�������", 15, 6.0, "���������� ������",
		true, "������������", "CG-67890",
		3000.0, "2024-11-01", "������ Y", 12);
	OTC_Controller otc_controller("����", "������", 30, 5.0, "�������", 40, 50000, "������",
		"+79001234567", "ivan@example.com", "��-��, 9-18");
	Storage storage;
	std::streambuf* old_buffer = std::cout.rdbuf();
	std::ostringstream new_buffer;
	std::cout.rdbuf(new_buffer.rdbuf());
	otc_controller.chek_details(conveyor, garbage, storage);
	std::cout.rdbuf(old_buffer);
	EXPECT_EQ(new_buffer.str(), "Details checked");
}