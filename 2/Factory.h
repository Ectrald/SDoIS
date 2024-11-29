#pragma once
#include <string>
class Factory
{
private:
	bool working = false;
	std::string status;
public:
	Factory(std::string status) : status(status) {}
	void start_working();
	void end_working();
};
