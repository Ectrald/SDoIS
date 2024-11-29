#pragma once
#include "Profile.h"
#include <iostream>
class Privacy_settings
{
private:
	bool show_email;
	bool show_phone;
public:
	Privacy_settings(bool show_email = true, bool show_phone = true);
	void change_settings(bool show_email, bool show_phone, Profile profile);
};

