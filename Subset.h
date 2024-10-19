#pragma once
class Subset {
private:
	std::string subset;
public:
	Subset(std::string str) {
		this->subset = str;
	}
	std::string line() {
		return this->subset;
	}
};