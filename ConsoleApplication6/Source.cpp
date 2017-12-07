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
	 рубль = 1,
	 рубл€ = 2,
	 рублей = 5,
	 
};
void main()
{
	setlocale(LC_ALL, "Russian");

		// 2. ƒано целое число от 1 до 365. ќпределить, какой день недели выпадает на это число, если 1 €нвар€ Ц понедельник.
	
/*
	int a;
	cout << " ƒано целое число от 1 до 365 " << endl;
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
			cout << "понедельник";
			break;
		}
		
		
		case 1:
		{
			cout << "вторник";
			break;
		}
		

		case 2:
		{
			cout << "среда ";
			break;
		}
		

		case 3:
		{
			cout << "четверг";
			break;
		}
		

		case 4:
		{
			cout << "п€тница";
			break;
		}
		

		case 5:
		{
			cout << "суббота";
			break;
		}
				

		case 6:
		{
			cout << "воскресенье";
			break; 
		}
		
		
		default:
			break;
		}
	}*/

	// 5. Ќаписать программу, котора€ при вводе числа в диапазоне от 1 до 20 добавл€ет к нему слово "рубль" в правильной форме. 
	// Ќапример, 1 рубль, 2 рубл€, 5 рублей
	
	int a, b;
	cout << "введите число в диапазоне от 1 до 20" << a;
	cin >> a;

	if (a<1&&a<19) 
	b = a % 7;
	enum rub w;
	w = (rub)b;

	switch (b)
	{
		cout << " рубль" << a;
	}

}





