#include <iostream>
#include <Windows.h>
#include "String.h"

using namespace std;

int String::count{};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Конструктор по умолчанию\n";
	String s1;
	cout << "Размер " << s1.GetSize() << endl;

	cout << "Строка произвольного размера\n";
	cout << "Введите размер: ";
	int tempSize{};
	cin >> tempSize;
	String s2(tempSize);
	cin.ignore();
	cout << "Размер " << s2.GetSize() << endl;

	cout << "Строка от пользователя\n";
	cout << "Введите строку\n";
	char tempStr[MAXLEN]{};
	cin.getline(tempStr, MAXLEN);
	String s3{ tempStr };
	cout << "Вывод строки выше\n";
	cout << s3 << endl;
	cout << "Размер " << s3.GetSize() << endl; 

	cout << "Измените последнюю строку\nВвод ";
	cin >> s3;
	cout << "Вывод строки выше\n";
	cout << s3 << endl;

	cout << "Кол-во созданных строк " << String::GetCount();

	return 0;
}