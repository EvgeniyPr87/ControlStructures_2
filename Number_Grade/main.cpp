#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	cout << "������� �����" << endl;
	int number;
	int grade;
	int result=1;
	int s = 0; //������� ��������

	cout << "������� �����"<<' '; cin >> number;
	cout << "������� �������"<<' '; cin >> grade;
	while (s != grade) // ���� ������� �� ������ ������ ������� �����
	{
		s += 1;
		result *= number;
	}
	cout << result;
	

}