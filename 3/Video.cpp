#include "Video.h"

bool Video::operator==(const Video& other) const
{
	return this->url == other.url && this->creator == other.creator && this->duration == other.duration && this->path == other.path && this->size == other.size;
}
