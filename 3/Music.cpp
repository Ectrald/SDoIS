#include "Music.h"

Music::Music(std::string url, std::string path, std::string creator, double size, double duration)
	: Media_file(url, path, creator, size), duration(duration) {}

bool Music::operator==(const Music& other) const
{
	return this->url == other.url && this->creator == other.creator && this->duration == other.duration && this->path == other.path && this->size == other.size;
}
