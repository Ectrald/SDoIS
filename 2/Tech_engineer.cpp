#include "Tech_engineer.h"
void Tech_engineer::fix_machin(Machine machine) {
	machine.condition_changing("good");
	std::cout << "Fixed";
}
void Tech_engineer::scheduled_inspection_of_machines() {
	for (size_t i = 0; i < this->machines_for_controle.size(); i++) {
		if (this->machines_for_controle[i].condition_check() != "good") {
			this->machines_for_controle[i].condition_changing("good");
		}
		else continue;
	}
	std::cout << "All machines fixed";
}

void Tech_engineer::add_machine_to_controle(Machine machine)
{
	this->machines_for_controle.push_back(machine);
}
