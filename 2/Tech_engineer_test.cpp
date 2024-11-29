#include <gtest/gtest.h>;
#include "Tech_engineer.h"
#include "Machine.h"

TEST(Tech_engineer_tests, fix_machin) {
	Machine machine("Станок для обработки деталей", 75.0, "0-10 см", 1200.0, "2x1.5x1.5 м",
		"алюминий", "автоматический", "новый", "Производитель Б", 2023);
	Tech_engineer tech_engineer("Иван", "Иванов", 30, 5.0, "мужской", 40, 50000, "здоров",
		"+79001234567", "ivan@example.com", "пн-пт, 9-18");
	std::streambuf* old_buffer = std::cout.rdbuf();
	std::ostringstream new_buffer;
	std::cout.rdbuf(new_buffer.rdbuf());
	tech_engineer.fix_machin(machine);
	std::cout.rdbuf(old_buffer);
	EXPECT_EQ(new_buffer.str(), "Fixed");
}

TEST(Tech_engineer_tests, scheduled_inspection_of_machines) {
	Machine machine1("Станок для обработки деталей", 75.0, "0-10 см", 1200.0, "2x1.5x1.5 м",
		"алюминий", "автоматический", "новый", "Производитель Б", 2023);
	Machine machine2("Станок для обработки деталей", 75.0, "0-10 см", 1200.0, "2x1.5x1.5 м",
		"алюминий", "автоматический", "новый", "Производитель Б", 2023);
	Tech_engineer tech_engineer("Иван", "Иванов", 30, 5.0, "мужской", 40, 50000, "здоров",
		"+79001234567", "ivan@example.com", "пн-пт, 9-18");
	tech_engineer.add_machine_to_controle(machine1);
	tech_engineer.add_machine_to_controle(machine2);
	std::streambuf* old_buffer = std::cout.rdbuf();
	std::ostringstream new_buffer;
	std::cout.rdbuf(new_buffer.rdbuf());
	tech_engineer.scheduled_inspection_of_machines();
	std::cout.rdbuf(old_buffer);
	EXPECT_EQ(new_buffer.str(), "All machines fixed");
}
