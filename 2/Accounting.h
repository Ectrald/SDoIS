#pragma once
class Accounting
{
private:
	bool completed_reports = false;
	bool completed_accounting_documents = false;
	bool completed_tax_documents = false;
public:
	Accounting() {}
	void complite_today_accounting() {
		completed_reports = true;
		completed_accounting_documents = true;
		completed_tax_documents = true;
	}
};

