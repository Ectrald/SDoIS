#include <gtest/gtest.h>;
#include "Tech_engineer.h"
#include "Machine.h"

TEST(Tech_engineer_tests, fix_machin) {
	Machine machine("������ ��� ��������� �������", 75.0, "0-10 ��", 1200.0, "2x1.5x1.5 �",
		"��������", "��������������", "�����", "������������� �", 2023);
	Tech_engineer tech_engineer("����", "������", 30, 5.0, "�������", 40, 50000, "������",
		"+79001234567", "ivan@example.com", "��-��, 9-18");
	std::streambuf* old_buffer = std::cout.rdbuf();
	std::ostringstream new_buffer;
	std::cout.rdbuf(new_buffer.rdbuf());
	tech_engineer.fix_machin(machine);
	std::cout.rdbuf(old_buffer);
	EXPECT_EQ(new_buffer.str(), "Fixed");
}

TEST(Tech_engineer_tests, scheduled_inspection_of_machines) {
	Machine machine1("������ ��� ��������� �������", 75.0, "0-10 ��", 1200.0, "2x1.5x1.5 �",
		"��������", "��������������", "�����", "������������� �", 2023);
	Machine machine2("������ ��� ��������� �������", 75.0, "0-10 ��", 1200.0, "2x1.5x1.5 �",
		"��������", "��������������", "�����", "������������� �", 2023);
	Tech_engineer tech_engineer("����", "������", 30, 5.0, "�������", 40, 50000, "������",
		"+79001234567", "ivan@example.com", "��-��, 9-18");
	tech_engineer.add_machine_to_controle(machine1);
	tech_engineer.add_machine_to_controle(machine2);
	std::streambuf* old_buffer = std::cout.rdbuf();
	std::ostringstream new_buffer;
	std::cout.rdbuf(new_buffer.rdbuf());
	tech_engineer.scheduled_inspection_of_machines();
	std::cout.rdbuf(old_buffer);
	EXPECT_EQ(new_buffer.str(), "All machines fixed");
}
