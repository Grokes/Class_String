#include <iostream>
#include <Windows.h>
#include "String.h"

using namespace std;

int String::count{};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "����������� �� ���������\n";
	String s1;
	cout << "������ " << s1.GetSize() << endl;

	cout << "������ ������������� �������\n";
	cout << "������� ������: ";
	int tempSize{};
	cin >> tempSize;
	String s2(tempSize);
	cin.ignore();
	cout << "������ " << s2.GetSize() << endl;

	cout << "������ �� ������������\n";
	cout << "������� ������\n";
	char tempStr[MAXLEN]{};
	cin.getline(tempStr, MAXLEN);
	String s3{ tempStr };
	cout << "����� ������ ����\n";
	cout << s3 << endl;
	cout << "������ " << s3.GetSize() << endl; 

	cout << "�������� ��������� ������\n���� ";
	cin >> s3;
	cout << "����� ������ ����\n";
	cout << s3 << endl;

	cout << "���-�� ��������� ����� " << String::GetCount();

	return 0;
}