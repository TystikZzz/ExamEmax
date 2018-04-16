#include<iostream>
#include<time.h>
#include"FlatRed.h"
using namespace std;


void main()
{
	setlocale(0, "");
	int x;
	Flat mas[10];
	mas[0] = { 0,3,140,850000000,sold };
	mas[1] = { 1,1,80,50000000,notBooked };
	mas[2] = { 2,4,180,100000000,sold };
	mas[3] = { 3,2,110,140000000,booked };
	mas[4] = { 4,3,150,140000000,notBooked };
	mas[5] = { 5,3,160,120000000,notBooked };
	mas[6] = { 6,5,210,125000000,sold };
	mas[7] = { 7,6,250,140000000,sold };
	mas[8] = { 8,1,60,30000000,notBooked };
	mas[9] = { 9,2,130,95000000,notBooked };

	do
	{
		cout << "============================================" << endl;
		cout << "Что вы хотите сделать?\n";
		cout << "1.Просмотреть все квартиры\n";
		cout << "2.Редактировать квартиру\n";
		cout << "3.Изменить статус квартиры\n";
		cout << "4.Показать квартиры с определенным статусом \n";
		cout << "5.Показать прибыль\n";
		cout << "============================================" << endl;
		cin >> x;
		switch (x)
		{
		case 1:
		{
			for (int i = 0; i < 10; i++)
			{
				cout << "*************************************" << endl;
				ShowAll(*(mas + i));
				cout << "*************************************" << endl;
			}
		}
		break;
		case 2:
		{
			int num;
			cout << "Введите ID квартиры,которую,вы хотите отредактировать" << endl;
			cin >> num;
			RedactFlat(mas, num);
		}
		break;
		case 3:
		{
			int num;
			cout << "Введите ID квартиры,статус которой,вы хотите изменить\n" << endl;
			cin >> num;
			ChangeStatus(mas, num);
		}
		break;
		case 4:
		{
			cout << "*************************************" << endl;
			ShowStatusFlat(mas);
			cout << "*************************************" << endl;
		}
		break;
		case 5:
		{
			Value(mas);
		}
		break;
		}
	} while (x > 0);
	system("pause");
}