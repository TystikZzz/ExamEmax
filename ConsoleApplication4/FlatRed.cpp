#include<iostream>
#include<time.h>
#include"FlatRed.h"
using namespace std;

void ShowAll(Flat mas)
{
	cout << "id: " << mas.id << endl;
	cout << "Кол-во комнат: " << mas.rooms << endl;
	cout << "Площадь: " << mas.s << endl;
	cout << "Цена: " << mas.price << endl;
	if (mas.status == sold)
		cout << "Статус:Продана" << endl;
	if (mas.status == booked)
		cout << "Статус:Забронирована" << endl;
	if (mas.status == notBooked)
		cout << "Статус:Свободна" << endl;

}
void RedactFlat(Flat mas[], int &num)
{
	cout << "Что вы хотите отредактировать" << endl;
	cout << "1.Кол-во комнат" << endl;
	cout << "2.Площадь" << endl;
	cout << "3.Цену" << endl;
	cout << "4.Статус" << endl;
	int a;
	cin >> a;
	switch (a)
	{
	case 1:
	{
		cin >> mas[num].rooms;
	}
	break;
	case 2:
	{
		cin >> mas[num].s;
	}
	break;
	case 3:
	{
		cin >> mas[num].price;
	}
	break;
	case 4:
	{

	}
	break;
	}
}

void ShowStatusFlat(Flat mas[])
{
	int x;
	cout << "Квартиры с каким статусом,вы хотели бы увидеть?\n";
	cout << "1.Свободна\n";
	cout << "2.Забронирована\n";
	cout << "3.Продана\n";
	cin >> x;
	switch (x)
	{
		
	case 1:
	{
		for (int i = 0; i < 10; i++)
		{
			if (mas[i].status == notBooked)
			{
				cout << "*************************************" << endl;
				cout << "id: " << mas[i].id << endl;
				cout << "Кол-во комнат: " << mas[i].rooms << endl;
				cout << "Площадь: " << mas[i].s << endl;
				cout << "Цена: " << mas[i].price << endl;
				cout << "*************************************" << endl;
				
			}
		}
	}
		break;
	case 2:
	{
		for (int i = 0; i < 10; i++)
		{
			if (mas[i].status == booked)
			{
				cout << "*************************************" << endl;
				cout << "id: " << mas[i].id << endl;
				cout << "Кол-во комнат: " << mas[i].rooms << endl;
				cout << "Площадь: " << mas[i].s << endl;
				cout << "Цена: " << mas[i].price << endl;
				cout << "*************************************" << endl;
				
			}
		}
	}
	break;
	case 3:
	{
		for (int i = 0; i < 10; i++)
		{
			if (mas[i].status == sold)
			{
				cout << "*************************************" << endl;
				cout << "id: " << mas[i].id << endl;
				cout << "Кол-во комнат: " << mas[i].rooms << endl;
				cout << "Площадь: " << mas[i].s << endl;
				cout << "Цена: " << mas[i].price << endl;
				cout << "*************************************" << endl;
				
			}
		}
	}
	break;
	}
	
}

void ChangeStatus(Flat mas[], int &num)
{
	int x;
	cout << "Какой новый статус вы хотите присвоить данной квартире?\n";
	cout << "1.Свободна\n";
	cout << "2.Забронирована\n";
	cout << "3.Продана\n";
	cin >> x;

	switch (x)
	{
	case 1:
	{
		if (mas[num].status != notBooked)
		{
			mas[num].status = notBooked;
		}
		else
		{
			cout << "Эта квартира уже помечена как свободная\n";
		}
	}
	break;
	case 2:
	{
		if (mas[num].status != booked)
		{
			mas[num].status = booked;
		}
		else
		{
			cout << "Эта квартира уже помечена как забронированная\n";
		}
		
	}
	break;
	case 3:
	{
		if (mas[num].status != sold)
		{
			mas[num].status = sold;
		}
		else
		{
			cout << "Эта квартира уже помечена как проданная\n";
		}
	}
	break;
	}
}

void Value(Flat mas[])
{
	int sum = 0;
	int kol = 0;
	for (int i = 0; i < 10; i++)
	{
		if (mas[i].status == sold)
		{
			kol++;
			sum += mas[i].price;
		}
	}
	cout << "Общее кол-во проданных квартир = " << kol << endl;
	cout << "Общая выручка составила = " << sum << endl;
}