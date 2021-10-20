#include <iostream>
#include <string>
#include "CName.h"
using namespace std;

int main() {
	CName FIO;
	cout << FIO.GetName() << endl;

	CName FIO2("Yleb", "Vohmyanin");
	cout << FIO2.GetName() << " " << FIO2.GetSurname() << endl;

	CName FIO3("Yleb", "Vohmyanin", "Yaroslavovich");
	cout << FIO3.GetName() << " " << FIO3.GetSurname() << " " << FIO3.GetPatr() << endl;

	CName FIO4("Yleb", "Vohmyanin", "Yaroslavovich", 18);
	cout << FIO4.GetName() << " " << FIO4.GetSurname() << " " << FIO4.GetPatr() << " " << FIO4.GetAge() << endl;

	string my_name, my_surname, my_patronymic;
	int my_age;
	cout << "Enter name: "; cin >> my_name;
	cout << "Enter surname: "; cin >> my_surname;
	cout << "Enter patronymic: "; cin >> my_patronymic;
	cout << "Enter age: "; cin >> my_age;

	CName FIO5(my_name, my_surname, my_patronymic, my_age);
	cout << FIO5.GetName() << " " << FIO5.GetSurname() << " " << FIO5.GetPatr() << " " << FIO5.GetAge() << endl;
}
