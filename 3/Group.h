#pragma once
#include "User.h"
#include "Post.h"
#include <vector>
#include <iostream>
class Group
{
private:
	std::vector<User> members;
	std::vector<Post> posts;
	std::string name;
	std::string description;
public:
	Group(std::string name, std::string description);
	void add_post(Post post);
	void remove_post(Post post);
	void add_user(User user);
	void remove_user(User user);
	void change_name(std::string new_name);
	void change_description(std::string new_description);
	std::vector<Post> get_posts();
};

