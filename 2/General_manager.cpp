#include "General_manager.h"

void General_manager::give_work_to_accountant(Accountant accountant, Archive archive, std::string password)
{
	accountant.work(Accounting(), archive, password);
}

void General_manager::give_task_to_tech_engineer(Tech_engineer tech_engineer)
{
	tech_engineer.scheduled_inspection_of_machines();
}

void General_manager::add_accountant(Accountant accountant)
{
	this->list_of_accountants.push_back(accountant);
}

void General_manager::add_chief_engineer(Chief_engineer chief_engineer)
{
	this->list_of_chief_engineers.push_back(chief_engineer);
}

void General_manager::add_otc_controller(OTC_Controller otc_controller)
{
	this->list_of_OTC_Controllers.push_back(otc_controller);
}

void General_manager::add_tech_engineer(Tech_engineer tech_engineer)
{
	this->list_of_tech_engeneers.push_back(tech_engineer);
}

void General_manager::add_worker(Worker worker)
{
	this->list_of_workers.push_back(worker);
}
