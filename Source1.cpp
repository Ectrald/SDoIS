#include "Header.h";

bool checkString(std::string str) // проверка на правильность введённой строки
{
	if (str == "{}") {
		std::cout << "Пустое множество";
		return false;
	}
	if (str.find(",,") != -1) return false;
	if (str.find("}{") != -1) return false;
	int openArr = 0;
	int openCourt = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '{') openArr++;
		if (str[i] == '}') openArr--;
	}
	if (openArr != 0 || openCourt != 0) return false;
	return true;
}
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

std::string normalizeSubSet(std::string subset) {
	auto elements = parseElements(subset);
	for (std::string& element : elements) {
		element = normalizeSingleElement(element);
	}
	std::sort(elements.begin(), elements.end());


	return "{" + join(elements) + "}";
}
std::string normalizeSingleElement(std::string element) {
	if (element.front() == '{' && element.back() == '}') {
		return normalizeSubSet(element);
	}
	return element;
}
std::vector<std::string> parseElements(std::string subset) {
	std::vector<std::string> elements;
	std::vector<std::string> unique_elements;
	int bracket_count = 0;
	std::string current_element;

	for (size_t i = 0; i < subset.size(); ++i) {
		char c = subset[i];

		if (c == '{') {
			if (bracket_count > 0) {
				current_element += c;
			}
			bracket_count++;
		}
		else if (c == '}') {
			bracket_count--;
			if (bracket_count > 0) {
				current_element += c;
			}
		}
		else if (c == ',' && bracket_count == 1) {
			std::string element = current_element;
			if (!element.empty()) {

				if (std::find(unique_elements.begin(), unique_elements.end(), element) != unique_elements.end()) {
					std::cerr << "Ошибка: Дубликат элемента \"" << element << "\" в множестве." << std::endl;
				}
				else {
					unique_elements.push_back(element);
					elements.push_back(element);
				}
			}
			current_element.clear();
		}
		else {
			current_element += c;
		}
	}

	if (!current_element.empty()) {
		std::string element = current_element;
		if (!element.empty()) {

			if (std::find(unique_elements.begin(), unique_elements.end(), element) != unique_elements.end()) {
				std::cerr << "Ошибка: Дубликат элемента \"" << element << "\" в множестве." << std::endl;
			}
			else {
				unique_elements.push_back(element);
				elements.push_back(element);
			}
		}
	}

	return elements;
}
std::string join(const std::vector<std::string>& elements) {
	std::string result;
	for (const auto& elem : elements) {
		if (!result.empty()) {
			result += ",";
		}
		result += elem;
	}
	return result;
}
//
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
			i++;
			for (; str[i] != ','; i++ && distance++) {}
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
size_t Set::amount_of_elements() {
	return this->Elements_sub.size() + this->Elements_el.size();
}
std::vector<std::string> Set::vec_of_full_elements() {
	std::vector<std::string> boot;
	for (size_t i = 0; i < this->Elements_el.size(); i++) {
		boot.push_back(this->Elements_el[i].line());
	}
	for (size_t i = 0; i < this->Elements_sub.size(); i++) {
		boot.push_back(this->Elements_sub[i].line());
	}
	return boot;
}
void Set::set_boolean(std::vector<std::string> boot, std::vector<std::string> result, size_t start) {
	if (!result.empty()) {
		for (const auto& str : result) {
			std::cout << str << " ";
		}
		std::cout << std::endl;
	}

	for (size_t i = start; i < boot.size(); ++i) {
		result.push_back(boot[i]);
		this->set_boolean(boot, result, i + 1);
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
