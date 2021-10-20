#include "CName.h"
// реалізація конструкторів та деструктора класу
// конструктор без параметрів
CName::CName(void)
{
	name = "";
	surname = "";
	patronymic = "";
	age = 0;
}
// конструктор з двома параметрами
CName::CName(string n_name, string n_sname)
{
	name = n_name;
	surname = n_sname;
	patronymic = "";
	age = 0;
}
// конструктор з трьома параметрами
CName::CName(string n_name, string n_sname, string n_patr)
{
	name = n_name;
	surname = n_sname;
	patronymic = n_patr;
	age = 0;
}
// конструктор з 4 параметрами
CName::CName(string n_name, string n_sname, string n_patr, int n_age) // 4 параметри
{
	name = n_name;
	surname = n_sname;
	patronymic = n_patr;
	age = n_age;
}

CName::~CName(void)
{
}
