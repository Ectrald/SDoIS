#pragma once
#include <string>
#include "Video.h"
#include "Music.h"
#include "Photo.h"
#include <vector>
#include "User.h"
class Message
{
private:
	User sending_user;
	std::string text;
	std::vector<Photo> attached_photos;
	std::vector<Music> attached_music;
	std::vector<Video> attached_videos;
public:
	Message(User sending_user, std::string text = "", std::vector<Photo> attached_photos = {}, std::vector<Music> attached_music = {}, std::vector<Video> attached_videos = {});
	void correct_text_in_message(std::string text);
	void correct_photos_in_message(std::vector<Photo> attached_photos);
	void correct_music_in_message(std::vector<Music> attached_music);
	void correct_video_in_message(std::vector<Video> attached_videos);
};

