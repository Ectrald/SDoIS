#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <streambuf>
#include <sstream>
#include "Element.h";
#include "Subset.h";
#include "Util.h";


class Set {
private:
	std::vector<Element> Elements_el;
	std::vector<Subset> Elements_sub;
	void Set_boolean(std::vector<std::string> boot, std::vector<std::string> result, size_t start);
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
	size_t Amount_of_elements();
	void Set_boolean() {
		std::vector<std::string> boot = this->Vec_of_full_elements();
		std::vector<std::string> result;
		this->Set_boolean(boot, result, 0);
	}
	bool operator[](std::string str);
	Set operator+(Set other);
	Set operator*(Set other);
	Set operator-(Set other);
	std::vector<std::string> Vec_of_full_elements();
};

