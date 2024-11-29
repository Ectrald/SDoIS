#pragma once
#include "Factory_employee.h"
#include <vector>
#include "Accountant.h"
#include "Accounting.h"
#include "Chief_engineer.h"
#include "OTC_Controller.h"
#include "Tech_engineer.h"
#include "Worker.h"
class General_manager : Factory_employee
{
private:
	std::vector <Accountant> list_of_accountants;
	std::vector <Chief_engineer> list_of_chief_engineers;
	std::vector <OTC_Controller> list_of_OTC_Controllers;
	std::vector <Tech_engineer> list_of_tech_engeneers;
	std::vector <Worker> list_of_workers;
public:
	virtual void give_work_to_accountant(Accountant accountant, Archive archive, std::string password);
	virtual void give_task_to_tech_engineer(Tech_engineer tech_engineer);
	virtual void add_accountant(Accountant accountant);
	virtual void add_chief_engineer(Chief_engineer chief_engineer);
	virtual void add_otc_controller(OTC_Controller otc_controller);
	virtual void add_tech_engineer(Tech_engineer tech_engineer);
	virtual void add_worker(Worker worker);
};

