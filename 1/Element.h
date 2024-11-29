#pragma once
class Element {
private:
	std::string elem;
public:
	Element(std::string str) {
		this->elem = str;
	}
	std::string line() {
		return this->elem;
	}
};