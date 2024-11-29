#pragma once
#include <string>
#include "Video.h"
#include "Music.h"
#include "Photo.h"
#include <vector>
class Post
{
private:
	int likes = 0;
	std::vector <std::string> comments;
	std::string text;
	std::vector<Photo> photos;
	std::vector<Music> music;
	std::vector<Video> videos;
public:
	Post(std::string text = "", std::vector<Photo> photos = {}, std::vector<Music> music = {}, std::vector<Video> videos = {});
	void like_post();
	void comment_post(std::string comment);
	bool operator==(const Post& other) const;
};

