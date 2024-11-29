#pragma once
#include "User.h"
#include "Chat.h"
#include <vector>
class Messenger
{
private:
	User current_user;
	std::vector <Chat> chats;
public:
	std::vector<Chat> find_chat(std::string chat_name);
	void add_new_chat(std::vector<User> participants, std::string chat_name);
};

