#pragma once
#include "Media_file.h"
class Video : Media_file
{
private:
	double duration;
public:
	bool operator==(const Video& other) const;
};

