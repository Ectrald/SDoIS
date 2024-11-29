#pragma once
#include <string>
class User
{
private:
	int id;
	std::string username;
	std::string password;
public:
	User(int id, std::string username, std::string password);
	int get_id();
};

