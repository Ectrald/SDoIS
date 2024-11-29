#include "Chat.h"

Chat::Chat(std::vector<User> participants, std::string chat_name)
	: participants(participants), chat_name(chat_name)
{
	if (this->participants.size() > 2) this->is_group_chat = true;
	else this->is_group_chat = false;
}

void Chat::send_message(Message message)
{
	this->messages.push_back(message);
	std::cout << "Message send";
}

void Chat::add_participant(User user)
{
	this->participants.push_back(user);
	if (this->participants.size() > 2) this->is_group_chat = true;
	else this->is_group_chat = false;

}

void Chat::remove_participant(User user)
{
	for (int i = 0; i < this->participants.size(); i++) {
		if (this->participants[i].get_id() == user.get_id()) {
			this->participants.erase(this->participants.begin() + i);
		}
	}
	if (this->participants.size() > 2) this->is_group_chat = true;
	else this->is_group_chat = false;
}

void Chat::change_chat_name(std::string new_chat_name)
{
	this->chat_name = new_chat_name;
}

std::vector<User> Chat::get_participants()
{
	return this->participants;
}

std::string Chat::get_chat_name()
{
	return this->chat_name;
}
