#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>

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
class Set {
private:
	std::vector<Element> Elements_el;
	std::vector<Subset> Elements_sub;
	void set_boolean(std::vector<std::string> boot, std::vector<std::string> result, size_t start);
public:
	Set(std::string str);
	Set() {};
	void Create_subset_el(std::string str);
	void Create_el(std::string str);
	void Output();
	void Add_elem();
	void Delete_elem();
	bool Compare_el(std::string str);
	bool Compare_subset(std::string str);
	size_t amount_of_elements();
	void set_boolean() {
		std::vector<std::string> boot = this->vec_of_full_elements();
		std::vector<std::string> result;
		this->set_boolean(boot, result, 0);
	}
	bool operator[](std::string str);
	Set operator+(Set other);
	Set operator*(Set other);
	Set operator-(Set other);
	std::vector<std::string> vec_of_full_elements();
};

std::string normalizeSubSet(std::string set);
std::string join(const std::vector<std::string>& elements);
std::string normalizeSingleElement(std::string element);
std::vector<std::string> parseElements(std::string set);
bool checkString(std::string str);
