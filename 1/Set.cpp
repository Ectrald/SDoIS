#include "Set.h";

void Set::Create_subset_el(std::string str) {
	Subset exmpl(str);
	this->Elements_sub.push_back(exmpl);

}
void Set::Create_el(std::string str) {
	Element exmpl(str);
	this->Elements_el.push_back(exmpl);
}
bool Set::Compare_el(std::string str) {
	for (size_t i = 0; i < this->Elements_el.size(); i++) {
		if (str == this->Elements_el[i].line()) {
			return true;
		}
		else continue;
	}
	return false;
}
bool Set::Compare_subset(std::string str) {
	for (size_t i = 0; i < this->Elements_sub.size(); i++) {
		if (str == this->Elements_sub[i].line()) {
			return true;
		}
		else continue;
	}
	return false;
}
Set::Set(std::string str) {
	str.erase(0, 1);
	str.pop_back();
	std::string boot;
	size_t start = 0, distance = 1, bracket_counter = 0;
	for (size_t i = 0; i < str.size(); ++i) {
		if (str[i] == '{' && i < str.size()) {
			start = i, bracket_counter++;
			for (i++; bracket_counter != 0; i++ && distance++) {
				if (str[i] == '{') {
					bracket_counter++;
				}
				if (str[i] == '}') {
					bracket_counter--;
				}
			}
			boot = normalizeSubSet(str.substr(start, distance));
			if (this->Compare_subset(boot)) {
				std::cout << "В множестве недопустимы одинаковые элементы";
				break;
			}
			else {
				this->Create_subset_el(boot);
				distance = 1;
			}

		}
		if (str[i] != '{' && str[i] != ',' && str[i] != '}' && i < str.size()) {
			start = i;
			if(i < str.size()) i++;
			for (; str[i] != ',' && i < str.size(); i++ && distance++) {}
			boot = str.substr(start, distance);
			if (this->Compare_el(boot)) {
				std::cout << "В множестве недопустимы одинаковые элементы";
				break;
			}
			else {
				this->Create_el(boot);
				distance = 1;
			}
		}
	}
}
void Set::Output() {
	std::cout << "{";
	for (size_t i = 0; i < this->Elements_el.size(); i++) {
		std::cout << this->Elements_el[i].line();
		if (i < this->Elements_el.size() - 1) {
			std::cout << ",";
		}
	}
	if (this->Elements_sub.size() != 0) std::cout << ",";
	for (size_t i = 0; i < this->Elements_sub.size(); i++) {
		std::cout << this->Elements_sub[i].line();
		if (i < this->Elements_sub.size() - 1) {
			std::cout << ",";
		}
	}
	std::cout << "}";
}
void Set::Add_elem() {
	std::string str;
	std::cout << "Введите элемент: ";
	std::cin >> str;
	str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
	if (str.find('{') != -1) {
		if (checkString(str)) {
			if (str.find(",,") != -1 && str.find("}{") != -1) {
				normalizeSubSet(str);
				this->Compare_subset(str);
				this->Create_subset_el(str);
			}
		}

	}
	else {
		this->Compare_el(str);
		this->Create_el(str);
	}
	std::cout << "Множество после изменений: ";
	this->Output();
}
void Set::Delete_elem() {
	std::string str;
	std::cout << "Введите элемент: ";
	std::cin >> str;
	if (str.find('{') != -1) {
		for (size_t i = 0; i < this->Elements_sub.size(); i++) {
			if (str == this->Elements_sub[i].line()) {
				this->Elements_sub.erase(this->Elements_sub.begin() + i);
			}
		}
	}
	else {
		for (size_t i = 0; i < this->Elements_el.size(); i++) {
			if (str == this->Elements_el[i].line()) {
				this->Elements_el.erase(this->Elements_el.begin() + i);
			}
		}
	}
	std::cout << "Множество после изменений: ";
	this->Output();
}
size_t Set::Amount_of_elements() {
	return this->Elements_sub.size() + this->Elements_el.size();
}
std::vector<std::string> Set::Vec_of_full_elements() {
	std::vector<std::string> boot;
	for (size_t i = 0; i < this->Elements_el.size(); i++) {
		boot.push_back(this->Elements_el[i].line());
	}
	for (size_t i = 0; i < this->Elements_sub.size(); i++) {
		boot.push_back(this->Elements_sub[i].line());
	}
	return boot;
}
void Set::Set_boolean(std::vector<std::string> boot, std::vector<std::string> result, size_t start) {
	if (!result.empty()) {
		for (const auto& str : result) {
			std::cout << str << " ";
		}
		std::cout << std::endl;
	}

	for (size_t i = start; i < boot.size(); ++i) {
		result.push_back(boot[i]);
		this->Set_boolean(boot, result, i + 1);
		result.pop_back();
	}
}
bool Set::operator[](std::string str) {
	if (str.find('{') != -1) {
		for (size_t i = 0; i < this->Elements_sub.size(); i++) {
			if (str == this->Elements_sub[i].line()) return true;
		}
	}
	else {
		for (size_t i = 0; i < this->Elements_el.size(); i++) {
			if (str == this->Elements_el[i].line()) return true;
		}
	}
	return false;
}
Set Set::operator+(Set other) {
	Set main = *this;
	Set result = main;
	for (size_t i = 0; i < other.Elements_el.size(); i++) {
		if (!result.Compare_el(other.Elements_el[i].line())) {
			result.Elements_el.push_back(other.Elements_el[i]);
		}
	}
	for (size_t i = 0; i < other.Elements_sub.size(); i++) {
		if (!result.Compare_subset(other.Elements_sub[i].line())) {
			result.Elements_sub.push_back(other.Elements_sub[i]);
		}
	}
	return result;
}
Set Set::operator*(Set other) {
	Set main = *this;
	Set result;
	for (size_t i = 0; i < other.Elements_el.size(); i++) {
		if (main.Compare_el(other.Elements_el[i].line())) {
			result.Elements_el.push_back(other.Elements_el[i]);
		}
	}
	for (size_t i = 0; i < other.Elements_sub.size(); i++) {
		if (main.Compare_subset(other.Elements_sub[i].line())) {
			result.Elements_sub.push_back(other.Elements_sub[i]);
		}
	}
	return result;
}
Set Set::operator-(Set other) {
	Set main = *this;
	Set result;
	for (size_t i = 0; i < main.Elements_el.size(); i++) {
		if (!other.Compare_el(main.Elements_el[i].line())) {
			result.Elements_el.push_back(main.Elements_el[i]);
		}
	}
	for (size_t i = 0; i < main.Elements_sub.size(); i++) {
		if (!other.Compare_subset(main.Elements_sub[i].line())) {
			result.Elements_sub.push_back(main.Elements_sub[i]);
		}
	}

	return result;
}
