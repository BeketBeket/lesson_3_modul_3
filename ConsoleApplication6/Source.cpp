#include <stdint.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;
//enum MyEnum
//{
//	Monday,
//	Tuesday,
//	Wednesday,
//	Thursday,
//	Friday,
//	Saturday,
//	Sunday
//};

enum rub 
{
	 ����� = 1,
	 ����� = 2,
	 ������ = 5,
	 
};
void main()
{
	setlocale(LC_ALL, "Russian");

		// 2. ���� ����� ����� �� 1 �� 365. ����������, ����� ���� ������ �������� �� ��� �����, ���� 1 ������ � �����������.
	
/*
	int a;
	cout << " ���� ����� ����� �� 1 �� 365 " << endl;
	cin >> a;

	
	if (1 < a&&a < 366) 
	
	
	{
		int b = a % 7;
		enum MyEnum w;
		w = (MyEnum)b;
				
		switch (b)
		{
		case 0:
		{
			cout << "�����������";
			break;
		}
		
		
		case 1:
		{
			cout << "�������";
			break;
		}
		

		case 2:
		{
			cout << "����� ";
			break;
		}
		

		case 3:
		{
			cout << "�������";
			break;
		}
		

		case 4:
		{
			cout << "�������";
			break;
		}
		

		case 5:
		{
			cout << "�������";
			break;
		}
				

		case 6:
		{
			cout << "�����������";
			break; 
		}
		
		
		default:
			break;
		}
	}*/

	// 5. �������� ���������, ������� ��� ����� ����� � ��������� �� 1 �� 20 ��������� � ���� ����� "�����" � ���������� �����. 
	// ��������, 1 �����, 2 �����, 5 ������
	
	int a, b;
	cout << "������� ����� � ��������� �� 1 �� 20" << a;
	cin >> a;

	if (a<1&&a<19) 
	b = a % 7;
	enum rub w;
	w = (rub)b;

	switch (b)
	{
		cout << " �����" << a;
	}

}





