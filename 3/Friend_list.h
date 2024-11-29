#pragma once
#include <vector>
#include "User.h"
#include <iostream>
class Friend_list
{
private:
	std::vector<User> friends;
public:
	void add_friend(User user);
	void remove_friend(User user);
	bool is_friend(User user);
};

