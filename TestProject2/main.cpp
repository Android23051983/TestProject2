#include <iostream>
#include<conio.h>

using namespace std;
using std::cin;
using std::cout;
using std::endl;


//#define PALINDROME
//#define SHOOTER_3D
//#define KEYBOARD
#define HAPPY_TICKET
void main()
{
	setlocale(LC_ALL, "Russian");
	
#ifdef PALINDROME
int number;
int last_number = 0;
int temp;
	cout << "������� �����: "; cin >> number;
	temp = number;

	do
	{
		last_number = 10 * last_number + number % 10;
		number /= 10;
		cout << last_number << endl;
	} while (number != 0);

	if (temp == last_number)
	{
		cout << temp << " - ���������" << endl;
	}
	else
	{
		cout << temp << " - �� ���������" <<endl;
	}
	system("pause");
#endif // PALINDROME

#ifdef HAPPY_TICKET
	int number;
	int last_number = 0;
	int last_number2 = 0;
	int temp_number = 0;
	int temp = 0;
	int decr = 0;
	int decr1 = 0;

	cout << "������� ������ ����� ������ (��������: 123456, 1234554321): "; cin >> number;

	temp_number = number;

	do //������ ���������� ������ � ��������
	{
		number /= 10;
		temp++;
	} while (number != 0);

	temp /= 2;
	

	while (decr++ < temp) //������ ����� ����� �������� ��������
	{
		last_number = last_number + temp_number % 10;
		temp_number /= 10;
	}

	while (decr1++ < temp) //����� ����� ������ �������� ��������
	{
		last_number2 = last_number2 + temp_number % 10;
		temp_number /= 10;
	}

	if (last_number == last_number2) //��������� ���� ���� � ��������
	{
		cout << "� ��� ���������� �����" << endl;
	}
	else
	{
		cout << "� ��� ������� �����" << endl;
	}
	system("pause");
#endif // HAPPY_TICKET


#ifdef SHOOTER_3D
	int key;
	key = _getch();

		switch (key)
		{
		case 27:cout << "����� �� ���������"; break;
		case 'w': cout << "�����"; break;
		case 's': cout << "�����"; break;
		case 'a': cout << "�����"; break;
		case 'd': cout << "������"; break;
		case 32: cout << "������"; break;
		case 13: cout << "�����"; break;
		}

#endif // SOOTER_3D

#ifdef KEYBOARD
		int key;
		key = _getch();
		
		while (!_kbhit())
		{
			if (key = 119)
			{
				cout << "�����"; break;
			}
			else if (key = 115)
			{
				cout << "�����";
			}
			else if (key = 97)
			{
				cout << "�����";
			}
			else if (key = 100)
			{
				cout << "������";
			}
		}
#endif // KEYBOARD


}