#include "Menu.h"

std::vector<Group> Menu::get_groups()
{
    return this->groups;
}

void Menu::add_group(Group group)
{
    this->groups.push_back(group);
}
