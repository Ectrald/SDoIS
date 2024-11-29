#pragma once
#include "Media_file.h"
class Music : Media_file
{
private:
	double duration;
public:
	Music(std::string url, std::string path, std::string creator, double size, double duration);
	bool operator==(const Music& other) const;
};

