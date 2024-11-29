#include "Group.h"

Group::Group(std::string name, std::string description)
    : name(name), description(description) {}

void Group::add_post(Post post)
{
    this->posts.push_back(post);
    std::cout << "Post added";
}

void Group::remove_post(Post post)
{
    for (int i = 0; i < this->posts.size(); i++) {
        if (this->posts[i] == post) this->posts.erase(this->posts.begin() + i);
    }
    std::cout << "Post removed";
}

void Group::add_user(User user)
{
    this->members.push_back(user);
    std::cout << "User added";
}

void Group::remove_user(User user)
{
    for (int i = 0; i < this->members.size(); i++) {
        if (this->members[i].get_id() == user.get_id()) this->members.erase(this->members.begin() + i);
    }
    std::cout << "User removed";
}

void Group::change_name(std::string new_name)
{
    this->name = new_name;
}

void Group::change_description(std::string new_description)
{
    this->description = new_description;
    std::cout << "Description changed";
}

std::vector<Post> Group::get_posts()
{
    return this->posts;
}
