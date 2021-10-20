#include <string>
using namespace std;
// Клас, що визначає загальні дані про клієнта
class CName
{
	string name; // Прізвище
	string surname; // ім'я
	string patronymic; // по-батькові
	int age; // вік
public:
	CName(void); // конструктор без параметрів
	CName(string n_name, string n_sname); // конструктор з двома параметрами
	CName(string n_name, string n_sname, string n_patr); // конструктор з трьома параметрами
	CName(string n_name, string n_sname, string n_patr, int n_age); // 4 параметри
	// внутрішні методи класу - реалізовані в оголошенні класу
	string GetName(void) { return name; }
	string GetSurname(void) { return surname; }
	string GetPatr(void) { return patronymic; }
	int GetAge(void) { return age; }
	~CName(void); // деструктор
};
