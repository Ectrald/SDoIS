#include "Set.h";

int main()
{
	setlocale(LC_ALL, "RU");
	std::cout << "{ a, b, c, {d, b}}\n";
	std::cout << "{c, d, {b, d}}\n";
	std::cout << "������� ������ ���������: ";
	std::string set_from_first_string;
	std::getline(std::cin, set_from_first_string);
	set_from_first_string.erase(std::remove(set_from_first_string.begin(), set_from_first_string.end(), ' '), set_from_first_string.end());
	if (!checkString(set_from_first_string)) {
		std::cout << "������� ��������� ���������";
		exit(0);
	}
	std::cout << "������� ������ ���������: ";
	std::string set_from_second_string;
	std::getline(std::cin, set_from_second_string);
	set_from_second_string.erase(std::remove(set_from_second_string.begin(), set_from_second_string.end(), ' '), set_from_second_string.end());
	if (!checkString(set_from_second_string)) {
		std::cout << "������� ��������� ���������";
		exit(0);
	}
	Set set1 = Set(set_from_first_string);
	Set set2 = Set(set_from_second_string);
	size_t index_for_switch_case = 0;
	std::string user_elem;
	size_t index_for_user_accept = 0;
MENU:
	std::cout << "\n";
	std::cout << "1 - ���������� ������ ���������\n";
	std::cout << "2 - ���������� ������ ���������\n";
	std::cout << "3 - �������� ������� ���������\n";
	std::cout << "4 - �������� ������� ���������\n";
	std::cout << "5 - �������� �������������� �������� � ������� ���������\n";
	std::cout << "6 - �������� �������������� �������� �� ������� ���������\n";
	std::cout << "7 - �������� ������� � ������ ���������\n";
	std::cout << "8 - �������� ������� �� ������ ���������\n";
	std::cout << "9 - ������� ������� �� ������� ���������\n";
	std::cout << "10 - ������� ������� �� ������� ���������\n";
	std::cout << "11 - ����������� ���� ��������\n";
	std::cout << "12 - ����������� ���� ��������\n";
	std::cout << "13 - �������� ������� ��������� �� ������\n";
	std::cout << "14 - �������� ������� ��������� � ������\n";
	std::cout << "15 - ������ ������� ���������\n";
	std::cout << "16 - ������ ������� ���������\n";
	std::cin >> index_for_switch_case;
	switch (index_for_switch_case) {
	case(1):
		set1.Output();
		std::cout << "" << std::endl;
		std::cout << "������� ����������?\n 1 - �� \n 2 - ���" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(2):
		set2.Output();
		std::cout << "" << std::endl;
		std::cout << "������� ����������?\n 1 - �� \n 2 - ���" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(3):
		std::cout << "�������� ������� ���������: " << set1.Amount_of_elements();
		std::cout << "" << std::endl;
		std::cout << "������� ����������?\n 1 - �� \n 2 - ���" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(4):
		std::cout << "�������� ������� ���������: " << set2.Amount_of_elements();
		std::cout << "" << std::endl;
		std::cout << "������� ����������?\n 1 - �� \n 2 - ���" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(5):
		std::cout << "������� �������: ";
		std::cin.ignore();
		std::getline(std::cin, user_elem);
		if (set1[user_elem]) {
			std::cout << "������� ����������� ���������";
		}
		else std::cout << "������� �� ����������� ���������";
		user_elem.clear();
		std::cout << "" << std::endl;
		std::cout << "������� ����������?\n 1 - �� \n 2 - ���" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(6):
		std::cout << "������� �������: ";
		std::cin.ignore();
		std::getline(std::cin, user_elem);
		if (set2[user_elem]) {
			std::cout << "������� ����������� ���������";
		}
		else std::cout << "������� �� ����������� ���������";
		user_elem.clear();
		std::cout << "" << std::endl;
		std::cout << "������� ����������?\n 1 - �� \n 2 - ���" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(7):
		set1.Add_elem();
		std::cout << "" << std::endl;
		std::cout << "������� ����������?\n 1 - �� \n 2 - ���" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(8):
		set2.Add_elem();
		std::cout << "" << std::endl;
		std::cout << "������� ����������?\n 1 - �� \n 2 - ���" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(9):
		set1.Delete_elem();
		std::cout << "" << std::endl;
		std::cout << "������� ����������?\n 1 - �� \n 2 - ���" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(10):
		set2.Delete_elem();
		std::cout << "" << std::endl;
		std::cout << "������� ����������?\n 1 - �� \n 2 - ���" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(11): {
		Set combining_sets = set1 + set2;
		std::cout << "���������: ";
		combining_sets.Output();
		std::cout << "" << std::endl;
		std::cout << "������� ����������?\n 1 - �� \n 2 - ���" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	}
	case(12): {
		Set intersection_of_sets = set1 * set2;
		std::cout << "���������: ";
		intersection_of_sets.Output();
		std::cout << "" << std::endl;
		std::cout << "������� ����������?\n 1 - �� \n 2 - ���" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	}
	case(13): {
		Set difference_of_sets1 = set1 - set2;
		std::cout << "���������: ";
		difference_of_sets1.Output();
		std::cout << "" << std::endl;
		std::cout << "������� ����������?\n 1 - �� \n 2 - ���" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	}
	case(14): {
		Set difference_of_sets2 = set2 - set1;
		std::cout << "���������: ";
		difference_of_sets2.Output();
		std::cout << "" << std::endl;
		std::cout << "������� ����������?\n 1 - �� \n 2 - ���" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	}
	case(15):
		set1.Set_boolean();
		std::cout << "" << std::endl;
		std::cout << "������� ����������?\n 1 - �� \n 2 - ���" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(16):
		set2.Set_boolean();
		std::cout << "" << std::endl;
		std::cout << "������� ����������?\n 1 - �� \n 2 - ���" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	default:
		std::cout << "������� �������� ��������, ��������� ����";
		goto MENU;
	}
}
//{a, b, c, {a, b}, {}, {a, {c}}}
//{a, {b,a}, {}, {a, {c}}}

//{ a, b, c, {d, b}}
//{c, d, {b, d}}