#pragma once
#include <vector>
#include <string>
#include "Accounting.h"
#include <iostream>
class Archive
{
private:
	std::vector <Accounting> archive_of_accounting;
    std::string archive_name; // �������� ������
    std::string creation_date; // ���� ��������
    std::string last_modified_date; // ���� ���������� ���������
    double size; // ������ ������
    std::string password; // ������
public:
    Archive(std::string archive_name, std::string creation_date, std::string last_modified_date, double size, std::string password);
	void accounting_to_archive(Accounting today_accounting);
    void change_password(std::string& password);
    bool check_password(std::string& password);
};

