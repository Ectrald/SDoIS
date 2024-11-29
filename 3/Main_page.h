#pragma once
#include "Post.h"
#include <vector>
#include "User.h"
#include "Menu.h"
class Main_page
{
private:
	User current_user;
	std::vector<Post> posts;
public:
	void updating_page(Menu menu);
};

