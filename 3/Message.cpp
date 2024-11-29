#include "Message.h"

Message::Message(User sending_user, std::string text, std::vector<Photo> attached_photos, std::vector<Music> attached_music, std::vector<Video> attached_videos)
	: sending_user(sending_user), attached_photos(attached_photos), text(text), attached_music(attached_music), attached_videos(attached_videos) {}

void Message::correct_text_in_message(std::string text)
{
	this->text = text;
}

void Message::correct_photos_in_message(std::vector<Photo> attached_photos)
{
	this->attached_photos = attached_photos;
}

void Message::correct_music_in_message(std::vector<Music> attached_music)
{
	this->attached_music = attached_music;
}

void Message::correct_video_in_message(std::vector<Video> attached_videos)
{
	this->attached_videos = attached_videos;
}

