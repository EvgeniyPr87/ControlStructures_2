#include<iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define RHOMBUS 
//#define ROTATION
//#define CHESS_BOARD
//#define HARD_CHESS 

void main()
{
	setlocale(LC_ALL, "");

	cout << "Geometry" << endl;

#ifdef SQUARE
	int n;
	cout << "Введите число звездочек" << ' '; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << "* ";
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	int n;
	cout << "Введите число звездочек" << ' '; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	int n;
	cout << "Введите число звездочек "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
			cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	int n;
	cout << "Введите число звездочек "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << "  ";
		for (int j = i; j < n; j++)
			cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_3

#ifdef TRIANGLE_4
	int n;
	cout << "Введите число звездочек "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = i; j < n; j++)
			cout << "  ";
		for (int j = 0; j < i; j++)
			cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_4

#ifdef RHOMBUS
	int n;
	cout << "Введите количество символов "; cin >> n;
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


#endif // RHOMBUS

#ifdef ROTATION
	int n;
	cout << "Введите число символов "; cin >> n;
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0)
				cout << "+  ";
			else
				cout << "-  ";
		}
		cout << endl;
	}
#endif // ROTATION

#ifdef CHESS_BOARD

	int n;
	char s = 178;
	cout << "Введите количество клеток "; cin >> n;
	cout << endl;
	setlocale(NULL, "C");
	for (int i = 0; i < n; i++)
	{
		cout << "\t\t";
		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0)
				cout << s << s;
			else
				cout << "  ";
		}
		cout << endl;
	}

#endif // CHESS_BOARD

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


#endif // HARD_CHESS
}
