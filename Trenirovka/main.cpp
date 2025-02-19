#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define TASK_1
//#define TASK_2_WORK
//#define DOSKA
//#define ROMB_
//#define FIBONACHI_TREN
//#define CHESS_BOARD // с тернарным оператором
//#define STEPEN //с тернарным оператором
//#define ROMB_2


void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_1

	int n;
	char m = 178;
	//bool w = true;

	cout << "Шахматная доска" << endl;
	cout << "Введите число клеток "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (true)
			{
				j % 2 == 0 || i % 2 == 0;

				if (true)
				{
					w = true;
					cout << "w ";
				}
				else
					cout << "0 ";
			}

			else
			{
				if (false)
				{

					cout << "w ";
				}
				else
					cout << "0 ";
			}





		}
		cout << endl;
	}
#endif // TASK_1

#ifdef TASK_2_WORK
	int n;
	char m = 178;
	//bool w = true;

	cout << "Шахматная доска" << endl;
	cout << "Введите число клеток "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		bool w = true;
		bool order = true;
		if (i % 2 == 0)
		{
			order = false;

			for (int j = 0; j < n; j++)
				if (j % 2 != 0)
				{
					w = false;
					cout << "  ";
				}
				else if (true) cout << m << m;
			cout << endl;
		}
		if (order)
		{
			for (int j = 1; j <= n; j++)
				if (j % 2 != 0)
				{
					w = false;
					cout << "  ";
				}
				else if (true) cout << m << m;
			cout << endl;
		}
	}


}
#endif // TASK_2_WORK

#ifdef ROMB_
int n;
cout << "Введите оличество знаков "; cin >> n;
for (int i = 0; i < n; i++)
{
	for (int j = i; j < n; j++)
		cout << " ";
	for (int j = 0; j <= i; j++)
	{
		cout << "  ";
		if (j == 0)
			cout << "/";
		if (j == i)
			cout << "\\ ";
	}
	cout << endl;
}
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < i; j++)
		cout << " ";
	for (int j = i; j < n; j++)
	{
		cout << "  ";
		if (j == i)
			cout << " \\";
		if (j == n - 1)
			cout << "/ ";
	}
	cout << endl;
}
}
#endif // ROMB_

#ifdef FIBONACHI_TREN
int n;
cout << "Ряд Фибоначи" << endl;
cout << "Введите количество чисел ряда  "; cin >> n;
for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	cout << a << " ";
#endif // FIBONACHI_TREN

#ifdef CHESS_BOARD
int n;
cout << "Введите количество клеток "; cin >> n;
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < n; (i + j) % 2 == 0 ? cout << "b " : cout << "w ", j++);
	cout << endl;
}
#endif // CHESS_BOARD


#ifdef STEPEN
double N = 1;
int n;
double a;
cout << "Вычисление степени" << endl;
cout << "Введите основание "; cin >> a;
cout << "Введите показатель степени "; cin >> n;
cout << endl;
n < 0 ? a = 1 / a, n = -n : a = a, n + n;
for (int i = 0; i < n; i++)
	N *= a;
cout << N;
#endif // STEPEN

#ifdef ROMB_2
int n;
cout << "Введите оличество знаков "; cin >> n;
for (int i = 0; i < n || i>n; i++)
{
	for (int j = i; j < n; j++)
	{
		if (i < n) cout << "0 ";
		else if (i > n) cout << "* ";
	}
	for (int j = 0; j < i; j++)
	{
		if (i > n) cout << "0 ";
		else if (i < n) cout << "* ";
	}

	cout << endl;
}
}
//for (int i = 0; i < n; i++)
//{
//	for (int m = 0; m < i; m++)
//		cout << " ";
//	for (int m = i; m <n; m++)
//	{
//		cout << "* ";
//		if (m == i)
//			cout << " \\";
//		if (m == n - 1)
//			cout << "/ ";  
#endif // ROMB_2
//int n;
//cin >> n;
//for (int i = 0; i < n; i++)
//{
//	
//	for (int j = 0; j < n; j++)
//		if (i <= n && j == 0)
//			cout << "| ";
//		else if (i <= n && j == n - 1)
//			cout << " |";
//		else if (i == 0 && j < n)
//			cout << "_ ";
//		else if (i == n-1 && j < n)
//			cout << "- ";
//		else cout << "  ";
//	cout << endl;
//}

const int t = 9;
char k[t][t];
for (int y = 0; y < t; y++)
{
	cout << endl;
	for (int x = 0; x < t; x++)
	{
		k[x][y] = '*';
		cout << k[x][y] << " ";
	}
}
cout << endl;



}

	



