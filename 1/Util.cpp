#include "Util.h";


bool checkString(std::string str)
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