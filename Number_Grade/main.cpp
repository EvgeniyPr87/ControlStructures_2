#include<iostream>
using namespace std;
//#define STEPEN_CHISLA
//#define STEPEN_CHISLA_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef STEPEN_CHISLA
	cout << "������� �����" << endl;
	int number;
	int grade;
	int result = 1;
	int s = 0; //������� ��������

	cout << "������� �����" << ' '; cin >> number;
	cout << "������� �������" << ' '; cin >> grade;
	while (s != grade) // ���� ������� �� ������ ������ ������� �����
	{
		s += 1;
		result *= number;
	}
	cout << result;
#endif // STEPEN_CHISLA

#ifdef STEPEN_CHISLA_2
	cout << "������� �����" << endl;
	double number;
	int grade;
	double result = 1;


	cout << "������� �����" << ' '; cin >> number;
	cout << "������� �������" << ' '; cin >> grade;
	if (grade < 0)
	{
		number = 1 / number;
		grade = -grade;
	}
	for (int i = 0; i < grade; i++)
	{
		result *= number;
	}
	cout << result;

#endif // STEPEN_CHISLA_2

}