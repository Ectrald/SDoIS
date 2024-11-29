#include "Set.h";

int main()
{
	setlocale(LC_ALL, "RU");
	std::cout << "{ a, b, c, {d, b}}\n";
	std::cout << "{c, d, {b, d}}\n";
	std::cout << "Введите первое множество: ";
	std::string set_from_first_string;
	std::getline(std::cin, set_from_first_string);
	set_from_first_string.erase(std::remove(set_from_first_string.begin(), set_from_first_string.end(), ' '), set_from_first_string.end());
	if (!checkString(set_from_first_string)) {
		std::cout << "Неверно введенное множество";
		exit(0);
	}
	std::cout << "Введите второе множество: ";
	std::string set_from_second_string;
	std::getline(std::cin, set_from_second_string);
	set_from_second_string.erase(std::remove(set_from_second_string.begin(), set_from_second_string.end(), ' '), set_from_second_string.end());
	if (!checkString(set_from_second_string)) {
		std::cout << "Неверно введенное множество";
		exit(0);
	}
	Set set1 = Set(set_from_first_string);
	Set set2 = Set(set_from_second_string);
	size_t index_for_switch_case = 0;
	std::string user_elem;
	size_t index_for_user_accept = 0;
MENU:
	std::cout << "\n";
	std::cout << "1 - Отобразить первое множество\n";
	std::cout << "2 - Отобразить второе множество\n";
	std::cout << "3 - Мощность первого множества\n";
	std::cout << "4 - Мощность второго множества\n";
	std::cout << "5 - Проверка принадлежности элемента к первому множеству\n";
	std::cout << "6 - Проверка принадлежности элемента ко второму множеству\n";
	std::cout << "7 - Добавить элемент в первое множество\n";
	std::cout << "8 - Добавить элемент во второе множество\n";
	std::cout << "9 - Удалить элемент из первого множества\n";
	std::cout << "10 - Удалить элемент из второго множества\n";
	std::cout << "11 - Объединение двух множеств\n";
	std::cout << "12 - Пересечение двух множеств\n";
	std::cout << "13 - Разность первого множества со вторым\n";
	std::cout << "14 - Разность второго множества с первым\n";
	std::cout << "15 - Булеан первого множества\n";
	std::cout << "16 - Булеан второго множества\n";
	std::cin >> index_for_switch_case;
	switch (index_for_switch_case) {
	case(1):
		set1.Output();
		std::cout << "" << std::endl;
		std::cout << "Желаете продолжить?\n 1 - да \n 2 - нет" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(2):
		set2.Output();
		std::cout << "" << std::endl;
		std::cout << "Желаете продолжить?\n 1 - да \n 2 - нет" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(3):
		std::cout << "Мощность первого множества: " << set1.Amount_of_elements();
		std::cout << "" << std::endl;
		std::cout << "Желаете продолжить?\n 1 - да \n 2 - нет" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(4):
		std::cout << "Мощность второго множества: " << set2.Amount_of_elements();
		std::cout << "" << std::endl;
		std::cout << "Желаете продолжить?\n 1 - да \n 2 - нет" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(5):
		std::cout << "Введите элемент: ";
		std::cin.ignore();
		std::getline(std::cin, user_elem);
		if (set1[user_elem]) {
			std::cout << "Элемент принадлежит множеству";
		}
		else std::cout << "Элемент не принадлежит множеству";
		user_elem.clear();
		std::cout << "" << std::endl;
		std::cout << "Желаете продолжить?\n 1 - да \n 2 - нет" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(6):
		std::cout << "Введите элемент: ";
		std::cin.ignore();
		std::getline(std::cin, user_elem);
		if (set2[user_elem]) {
			std::cout << "Элемент принадлежит множеству";
		}
		else std::cout << "Элемент не принадлежит множеству";
		user_elem.clear();
		std::cout << "" << std::endl;
		std::cout << "Желаете продолжить?\n 1 - да \n 2 - нет" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(7):
		set1.Add_elem();
		std::cout << "" << std::endl;
		std::cout << "Желаете продолжить?\n 1 - да \n 2 - нет" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(8):
		set2.Add_elem();
		std::cout << "" << std::endl;
		std::cout << "Желаете продолжить?\n 1 - да \n 2 - нет" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(9):
		set1.Delete_elem();
		std::cout << "" << std::endl;
		std::cout << "Желаете продолжить?\n 1 - да \n 2 - нет" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(10):
		set2.Delete_elem();
		std::cout << "" << std::endl;
		std::cout << "Желаете продолжить?\n 1 - да \n 2 - нет" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(11): {
		Set combining_sets = set1 + set2;
		std::cout << "Результат: ";
		combining_sets.Output();
		std::cout << "" << std::endl;
		std::cout << "Желаете продолжить?\n 1 - да \n 2 - нет" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	}
	case(12): {
		Set intersection_of_sets = set1 * set2;
		std::cout << "Результат: ";
		intersection_of_sets.Output();
		std::cout << "" << std::endl;
		std::cout << "Желаете продолжить?\n 1 - да \n 2 - нет" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	}
	case(13): {
		Set difference_of_sets1 = set1 - set2;
		std::cout << "Результат: ";
		difference_of_sets1.Output();
		std::cout << "" << std::endl;
		std::cout << "Желаете продолжить?\n 1 - да \n 2 - нет" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	}
	case(14): {
		Set difference_of_sets2 = set2 - set1;
		std::cout << "Результат: ";
		difference_of_sets2.Output();
		std::cout << "" << std::endl;
		std::cout << "Желаете продолжить?\n 1 - да \n 2 - нет" << std::endl;
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
		std::cout << "Желаете продолжить?\n 1 - да \n 2 - нет" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	case(16):
		set2.Set_boolean();
		std::cout << "" << std::endl;
		std::cout << "Желаете продолжить?\n 1 - да \n 2 - нет" << std::endl;
		std::cin >> index_for_user_accept;
		if (index_for_user_accept == 1) {
			index_for_user_accept = 0;
			goto MENU;
		}
		else exit(0);
	default:
		std::cout << "Неверно введённое значение, повторите ввод";
		goto MENU;
	}
}
//{a, b, c, {a, b}, {}, {a, {c}}}
//{a, {b,a}, {}, {a, {c}}}

//{ a, b, c, {d, b}}
//{c, d, {b, d}}