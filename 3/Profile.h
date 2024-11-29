#pragma once
#include "Post.h"
#include <vector>
#include "Photo.h"
#include "Music.h"
#include "User.h"
#include <iostream>
class Profile
{
private:
	User current_user;
	std::string full_name;
	Photo* profile_picture;
	std::string bio;
	std::string location;
	std::vector <Music> collection_of_music;
	std::vector <Post> posts;
	std::string email;
	std::string phone_number;
public:
	Profile(User current_user, std::string full_name);
	void set_email(std::string email);
	void set_phone_number(std::string phone_number);
	void change_profile_picture(Photo* profile_picture);
	void change_bio(std::string bio);
	void change_location(std::string location);
	void add_music(Music music);
	void remove_music(Music music);
	void add_post(Post post);
	void remove_post(Post post);
};

