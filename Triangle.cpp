#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;
//Балаев
int main()
{
	setlocale(LC_ALL, "");
	int a, type, position, color;
	char symbol;
	cout << "1.\t\t2.\n\n*\t\t  *  \n**\t\t *** \n***\t\t*****\n\n";
	cout << "Выберите тип треугольника: ";
	cin >> type;

	if (type == 1)
	{
		cout << "1.\t\t2.\n\n*\t\t    *\n**\t\t   **\n***\t\t  ***\n****\t\t ****\n*****\t\t*****\n\n";
		cout << "3.\t\t4.\n\n*****\t\t*****\n****\t\t ****\n***\t\t  ***\n**\t\t   **\n*\t\t    *\n\n";
		cout << "\nВыберите позицию: ";
		cin >> position;

		cout << "1. Заполненный\n2. Незолый\n";
		cout << "Выберите заполнение: ";
		cin >> color;

		cout << "Введите стороны треугольника:\na = ";
		cin >> a;

		cout << "Выберите символ для заполнения: ";
		cin >> symbol;


		if (color == 1 and position == 1)		//закрашенный
		{
			for (int i = 1; i <= a; i++)
			{
				for (int j = 1; j <= i; j++)
				{
					cout << symbol;
				}
				cout << endl;
			}
		}
		if (color == 2 and position == 1)		//пустой
		{
			for (int i = 1; i <= a; i++)
			{
				for (int j = 1; j <= i; j++)
				{
					if ((i == 1 || i == 2 || i == a || j == 1 || j == i))
					{
						cout << symbol;
					}
					else
					{
						cout << " ";
					}
				}
				cout << "\n";
			}
		}
		if (color == 1 and position == 2)
		{
			for (int i = 1; i <= a; i++)
			{
				for (int j = a - i; j > 0; j--)
				{
					cout << " ";
				}
				for (int p = 1; p <= i; p++)
				{
					cout << symbol;
				}
				cout << "\n";
			}
		}
		if (color == 2 and position == 2)
		{
			for (int i = 1; i <= a; i++)
			{
				for (int j = a - i; j > 0; j--)
				{
					cout << " ";
				}
				for (int p = 1; p <= i; p++)
				{
					if (i == 1 || i == 2 || i == a || p == 1 || p == i)
					{
						cout << symbol;
					}
					else
					{
						cout << " ";
					}
				}
				cout << "\n";
			}
		}
		if (color == 1 and position == 3)
		{
			for (int i = a; i >= 1; i--)
			{
				for (int j = i; j > 0; j--)
				{
					cout << symbol;
				}
				cout << "\n";
			}
		}
		if (color == 2 and position == 3)
		{
			for (int i = a; i > 0; i--)
			{
				for (int j = i; j > 0; j--)
				{
					if (i == 1 || i == 2 || i == a || j == 1 || j == i)
					{
						cout << symbol;
					}
					else
					{
						cout << " ";
					}
				}
				cout << "\n";
			}
		}
		if (color == 1 and position == 4)
		{
			for (int i = a; i > 0; i--)
			{
				for (int j = a - i; j > 0; j--)
				{
					cout << " ";
				}
				for (int p = i; p > 0; p--)
				{
					cout << symbol;
				}
				cout << "\n";
			}
		}
		if (color == 2 and position == 4)
		{
			for (int i = a; i > 0; i--)
			{
				for (int j = a - i; j > 0; j--)
				{
					cout << " ";
				}
				for (int p = i; p > 0; p--)
				{
					if (i == 1 || i == 2 || i == a || p == 1 || p == i)
					{
						cout << symbol;
					}
					else
					{
						cout << " ";
					}
				}
				cout << "\n";
			}
		}
	}
	else if (type == 2)
	{
		cout << "\n1.\t\t2.\n\n  *  \t\t*****\n *** \t\t *** \n*****\t\t  *  \n";
		cout << "\nВыберите позицию: ";
		cin >> position;

		cout << "1. Заполненный\n2. Незолый\n";
		cout << "Выберите заполнение: ";
		cin >> color;

		cout << "Введите стороны треугольника:\na = ";
		cin >> a;

		cout << "Выберите символ для заполнения: ";
		cin >> symbol;

		if (color == 1 and position == 1)
		{
			for (int i = 1; i <= a; i++)
			{
				for (int j = 0; j < a - i; j++)
				{
					cout << " ";
				}
				for (int j = 1; j <= i; j++)
				{
					cout << symbol << " ";
				}
				cout << "\n";
			}
		}
		if (color == 2 and position == 1)
		{
			for (int i = 1; i <= a; i++)
			{
				for (int j = i; j <= a; j++)
				{
					cout << " ";
				}
				for (int p = 1; p < 2 * i; p++)
				{
					if (i == a || (p == 1 || p == 2 * i - 1))
					{
						cout << symbol;
					}
					else
					{
						cout << " ";
					}
				}
				cout << "\n";
			}
		}
		if (color == 1 and position == 2)
		{
			for (int i = a; i >= 1; i--)
			{
				for (int j = a; j > i; j--)
				{
					cout << " ";
				}
				for (int p = 1; p < 2 * i; p++)
				{
					cout << symbol;
				}
				cout << "\n";
			}
		}
		if (color == 2 and position == 2)
		{
			for (int i = a; i >= 1; i--)
			{
				for (int j = a; j > i; j--)
				{
					cout << " ";
				}
				for (int p = 1; p < 2 * i; p++)
				{
					if (i == a || (p == 1 || p == 2 * i - 1))
					{
						cout << symbol;
					}
					else
					{
						cout << " ";
					}
				}
				cout << "\n";
			}
		}
	}
	else
	{
		cout << "Ошибка\nВыбранны неверные значения";
	}
}