#include "Privacy_settings.h"

Privacy_settings::Privacy_settings(bool show_email, bool show_phone)
	: show_email(show_email), show_phone(show_phone) {}

void Privacy_settings::change_settings(bool show_email, bool show_phone, Profile profile)
{
	this->show_email = show_email;
	this->show_phone = show_phone;
	if (show_email = false) profile.set_email("Hiden");
	if (show_phone = false) profile.set_phone_number("Hiden");
	std::cout << "Privacy settings changed";
}
