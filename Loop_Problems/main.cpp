#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define VVOD
//#define VVOD_2
//#define VVOD_3
//#define VVOD_5
//#define MAX_MIN //нужно разобраться с минимальными и максимальными значениями
//#define PIRAMIDA
//#define HARD_CHESS

void main()
{
	setlocale(LC_ALL, "");

#ifdef VVOD
	int number;
	int sum = 0;
	int i = 0;
	cout << "Введите числа" << endl;

	while (i < 10)
	{
		cin >> number;
		sum += number;
		i++;
	}
	cout << sum;
#endif // VVOD

#ifdef VVOD_2
	int number;
	int sum = 0;
	int i = 0;
	while (i < 10 && cin >> number)
	{
		sum += number;
		i++;
	}
	cout << sum;
#endif // VVOD_2

#ifdef VVOD_3
	int number;
	int result = 0;
	//int i = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> number;
		if (number % 5 == 0) result += 1;

	}
	cout << result;
#endif // VVOD_3

#ifdef VVOD_5
	int number;
	int result_5 = 0;
	int result_3 = 0;
	cout << "Введите ваши числа " << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> number;
		if (number % 5 == 0) result_5 += 1;
		if (number % 3 == 0) result_3 += 1;
	}
	cout << "Кратны 5 " << result_5 << " чисел" << endl;
	cout << "Кратны 3 " << result_3 << " чисел" << endl;
#endif // VVOD_5


#ifdef MAX_MIN
	/*Задача 2: Углубленный подсчет четных и нечетных чисел
Напишите программу, которая запрашивает у пользователя
целые числа, пока он не введет 0. После этого программа
должна вывести количество введенных четных и нечетных чисел.
Также программа должна вывести максимальное и минимальное
четные числа среди введенных(если четные числа были введены).*/

	int number;
	int even_n = 0;
	int odd_n = 0;
	int even_max;
	int even_min;
	//int i = 0;

	cout << "Введите целые числа " << endl;

	while (true)
	{
		cin >> number;
		if (number == 0) break;

		if (number % 2 == 0)
		{
			even_n++;
			//if (number < even_min) even_min = number;
			//if (number > even_max) even_max = number;
		}
		if (number % 2 != 0)
			odd_n++;
	}
	cout << "Четных чисел " << even_n << endl;
	cout << "Нечетных чисел " << odd_n << endl;
	//cout << "_min " << even_min << endl;
	//cout << "_max " << even_max << endl;  
#endif // MAX_MIN

#ifdef PIRAMIDA
	int pyramid_level;
	cout << "Введите количество уровней пирамиды "; cin >> pyramid_level;
	for (int i = 1; i <= pyramid_level; i++)
	{
		for (int j = i; j <= pyramid_level; j++)
			cout << "0";
		for (int j = 0; j < (2 * i - 1); j++)
		{
			for (int i = 0; i < pyramid_level; i++)
				for (int j = 0; j < pyramid_level; j++)
					cout << i;
		}
		cout << endl;

		//for (int j = i; j < pyramid_level; j++)
		cout << "0";


		cout << endl;
	}









#endif // PIRAMIDA

#ifdef HARD_CHESS
	int n;
	cout << "Введите размер доски "; cin >> n;

	for (int m = 0; m < n; m++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (j % 2 == 0 && m % 2 == 0 || j % 2 != 0 && m % 2 != 0)
					for (int i = 0; i < n; i++) cout << "* ";
				else
					for (int i = 0; i < n; i++) cout << "  ";
			} cout << endl;
		}

	}
}

#endif // HARD_CHESS


int n;
cout << "Введите количество символов "; cin >> n;
for (int i = 0; i < 2 * n; i++)
{
	for (int j = i; j < n; j++) cout << "0 ";
	for (int j = 0; j < i; j++) cout << "* ";
	cout << endl;
		
}



	






}



		
			
		
				
		
		
	

			



			
		
		
	



	
