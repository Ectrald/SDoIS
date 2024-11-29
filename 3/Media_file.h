#pragma once
#include <string>
class Media_file
{
protected:
	std::string url;
	std::string path;
	std::string creator;
	double size;
public:
	Media_file(std::string url, std::string path, std::string creator, double size);
};

