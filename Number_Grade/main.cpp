#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	cout << "Степень числа" << endl;
	int number;
	int grade;
	int result=1;
	int s = 0; //счетчик итераций

	cout << "Введите число"<<' '; cin >> number;
	cout << "Введите степень"<<' '; cin >> grade;
	while (s != grade) // пока счетчик не станет равным степени числа
	{
		s += 1;
		result *= number;
	}
	cout << result;
	

}