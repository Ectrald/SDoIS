#pragma once
#include "Privacy_settings.h"
#include "Group.h"
#include "Friend_list.h"
#include <vector>
#include "User.h"
class Menu
{
private:
	User current_user;
	std::vector<Group> groups;
	Friend_list friend_list;
	Privacy_settings privacy_settings;
public:
	std::vector<Group> get_groups();
	void add_group(Group group);
};

