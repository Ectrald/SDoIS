#include "Post.h"

Post::Post(std::string text, std::vector<Photo> photos, std::vector<Music> music, std::vector<Video> videos)
	: text(text), photos(photos), music(music), videos(videos) {}

void Post::like_post()
{
	this->likes++;
}

void Post::comment_post(std::string comment)
{
	this->comments.push_back(comment);
}

bool Post::operator==(const Post& other) const
{
	return this->text == other.text && this->comments == other.comments && this->likes == other.likes && this->music == other.music && this->photos == other.photos && this->videos == other.videos;
}
