#include "Friend_list.h"

void Friend_list::add_friend(User user)
{
	this->friends.push_back(user);
	std::cout << "friend added";
}

void Friend_list::remove_friend(User user)
{
	for (int i = 0; i < this->friends.size(); i++) {
		if (this->friends[i].get_id() == user.get_id()) {
			this->friends.erase(this->friends.begin() + i);
		}
	}
	std::cout << "friend removed";
}

bool Friend_list::is_friend(User user)
{
	for (int i = 0; i < this->friends.size(); i++) {
		if (this->friends[i].get_id() == user.get_id()) {
			return true;
		}
		
	}
	return false;
}
