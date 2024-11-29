#include "Photo.h"

Photo::Photo(std::string url, std::string path, std::string creator, double size, double x_resolution, double y_resolution)
	: Media_file(url, path, creator, size), x_resolution(x_resolution), y_resolution(y_resolution) {}

bool Photo::operator==(const Photo& other) const
{
	return this->url == other.url && this->creator == other.creator && this->path == other.path && this->size == other.size && this->x_resolution == other.x_resolution && this->y_resolution == other.y_resolution;
}
