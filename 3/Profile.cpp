#include "Profile.h"

Profile::Profile(User current_user, std::string full_name)
	: current_user(current_user), full_name(full_name) {}

void Profile::set_email(std::string email)
{
	this->email = email;
	std::cout << "email added";
}

void Profile::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
}

void Profile::change_profile_picture(Photo* profile_picture)
{
	this->profile_picture = profile_picture;
}

void Profile::change_bio(std::string bio)
{
	this->bio = bio;
}

void Profile::change_location(std::string location)
{
	this->location = location;
	std::cout << "location changed";
}

void Profile::add_music(Music music)
{
	this->collection_of_music.push_back(music);
}

void Profile::remove_music(Music music)
{
	for (int i = 0; i < this->collection_of_music.size(); i++) {
		if (this->collection_of_music[i] == music) this->collection_of_music.erase(this->collection_of_music.begin() + i);
	}
	std::cout << "music removed";
}

void Profile::add_post(Post post)
{
	this->posts.push_back(post);
}

void Profile::remove_post(Post post)
{
	for (int i = 0; i < this->posts.size(); i++) {
		if (this->posts[i] == post) this->posts.erase(this->posts.begin() + i);
	}
}
