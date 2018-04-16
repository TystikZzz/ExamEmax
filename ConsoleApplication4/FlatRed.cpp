#include<iostream>
#include<time.h>
#include"FlatRed.h"
using namespace std;

void ShowAll(Flat mas)
{
	cout << "id: " << mas.id << endl;
	cout << "���-�� ������: " << mas.rooms << endl;
	cout << "�������: " << mas.s << endl;
	cout << "����: " << mas.price << endl;
	if (mas.status == sold)
		cout << "������:�������" << endl;
	if (mas.status == booked)
		cout << "������:�������������" << endl;
	if (mas.status == notBooked)
		cout << "������:��������" << endl;

}
void RedactFlat(Flat mas[], int &num)
{
	cout << "��� �� ������ ���������������" << endl;
	cout << "1.���-�� ������" << endl;
	cout << "2.�������" << endl;
	cout << "3.����" << endl;
	cout << "4.������" << endl;
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
	cout << "�������� � ����� ��������,�� ������ �� �������?\n";
	cout << "1.��������\n";
	cout << "2.�������������\n";
	cout << "3.�������\n";
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
				cout << "���-�� ������: " << mas[i].rooms << endl;
				cout << "�������: " << mas[i].s << endl;
				cout << "����: " << mas[i].price << endl;
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
				cout << "���-�� ������: " << mas[i].rooms << endl;
				cout << "�������: " << mas[i].s << endl;
				cout << "����: " << mas[i].price << endl;
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
				cout << "���-�� ������: " << mas[i].rooms << endl;
				cout << "�������: " << mas[i].s << endl;
				cout << "����: " << mas[i].price << endl;
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
	cout << "����� ����� ������ �� ������ ��������� ������ ��������?\n";
	cout << "1.��������\n";
	cout << "2.�������������\n";
	cout << "3.�������\n";
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
			cout << "��� �������� ��� �������� ��� ���������\n";
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
			cout << "��� �������� ��� �������� ��� ���������������\n";
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
			cout << "��� �������� ��� �������� ��� ���������\n";
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
	cout << "����� ���-�� ��������� ������� = " << kol << endl;
	cout << "����� ������� ��������� = " << sum << endl;
}