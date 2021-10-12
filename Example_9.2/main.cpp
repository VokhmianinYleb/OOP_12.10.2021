#include <iostream>
#include "CMyPoint.h"
using namespace std;

int main() {
	CMyPoint MP; // автоматично викликається конструктор за замовчуванням
	CMyPoint MP2(5, -2);
	cout << MP.GetX() << " " << MP.GetY() <<endl;
	cout << MP2.GetX() << " " << MP2.GetY() << endl;

	MP.SetPoint(4, -10); // виклик методів класу
	int t;
	t = MP.GetY(); // t = -10
	cout << t << endl;
	
	t = MP2.GetX(); //t = 0
	cout << t << endl;

	int n, m;
	cout << "Enter n:"; cin >> n;
	cout << "Enter m:"; cin >> m;
	CMyPoint MP3(n, m);
	cout << MP3.GetX() << " " << MP3.GetY() << endl;

	n = 5; m = 12;
	CMyPoint MP4(n, m);
	cout << MP4.GetX() << " " << MP4.GetY() << endl;
}
