#pragma once
#include "Message.h"
#include <vector>
#include "User.h"
#include <iostream>
class Chat
{
private:
	std::vector<Message> messages;
	std::vector<User> participants;
	std::string chat_name;
	bool is_group_chat;
public:
	Chat(std::vector<User> participants, std::string chat_name);
	void send_message(Message message);
	void add_participant(User user);
	void remove_participant(User user);
	void change_chat_name(std::string new_chat_name);
	std::vector<User> get_participants();
	std::string get_chat_name();
};

