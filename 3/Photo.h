#pragma once
#include "Media_file.h"
class Photo : public Media_file
{
private:
	double x_resolution;
	double y_resolution;
public:
	Photo(std::string url, std::string path, std::string creator, double size, double x_resolution, double y_resolution);
	bool operator==(const Photo& other) const;
};

