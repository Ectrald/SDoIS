#include "User.h"

User::User(int id, std::string username, std::string password)
    : id(id), username(username), password(password) {}

int User::get_id()
{
    return this->id;
}
