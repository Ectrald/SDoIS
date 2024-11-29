#include "Messenger.h"

std::vector<Chat> Messenger::find_chat(std::string chat_name)
{
    std::vector<Chat> chats;
    for (int i = 0; i < this->chats.size(); i++) {
        if (chat_name == this->chats[i].get_chat_name()) {
            chats.push_back(this->chats[i]);
        }
    }
    return chats;
}

void Messenger::add_new_chat(std::vector<User> participants, std::string chat_name)
{
    this->chats.push_back(Chat(participants, chat_name));
}
