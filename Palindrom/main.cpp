#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define PALINDROM_// ��������� �� �������
//#define PALINDROM_EXPL// � �����������

void main()
{
	setlocale(LC_ALL, "ru");

#ifdef PALINDROM_
	cout << "Palindrom" << endl;
	int number;
	int revers = 0;//����� ���������� � �������� �������
	cout << "������� �����"; cin >> number;
	int bufer = number;//����� ���������� �����
	while (bufer) //���� ����� �� 0 ����� true
	{
		revers *= 10;//�������� ������ �����
		revers += bufer % 10;
		bufer /= 10;

	}
	cout << number << endl;
	cout << revers;
	if (revers == number)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "������� �����" << endl;
	}
#endif // PALINDROM_

#ifdef PALINDROM_EXPL
	cout << "��������� ������������ �������� �� ��������� ����� �����������" << endl;
	int number;// ����� ������� ����� �������� � ����������
	int revers = 0;// �������� �����, ������� ����� ��������
	cout << "������� ���� �����" << ' '; cin >> number;
	int bufer = number; //�����, ����� ������������ ��� ����� ���������� �����. ����� ��������� ����� �������� ����������
	while (bufer) // ���� �������� bufer=true(������ bufer �� ����� 0 ) ����� ����������� ����
	{
		revers *= 10; //��������� ����� �������
		revers += bufer % 10;// � revers ���������� ������� ������ ����� 
		bufer /= 10; // ������� ������� ������
	}
	cout << revers << endl;
	if (revers == number)
	{
		cout << "����� ���������" << endl;
	}
	else
	{
		cout << "�� ���������" << endl;
	}
#endif // PALINDROM_EXPL




}

