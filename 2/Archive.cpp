#include "Archive.h"
Archive::Archive(std::string archive_name, std::string creation_date, std::string last_modified_date, double size, std::string password)
	: archive_name(archive_name), creation_date(creation_date), last_modified_date(last_modified_date), size(size), password(password) {}
void Archive::accounting_to_archive(Accounting today_accounting) {
	this->archive_of_accounting.push_back(today_accounting);
}
void Archive::change_password(std::string& password) {
	this->password = password;
	std::cout << "Password changed";
}
bool Archive::check_password(std::string& password) {
	if (password == this->password) return true;
	return false;
}