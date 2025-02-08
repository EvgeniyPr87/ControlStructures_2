#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define STAR
//#define TRINGL
//#define TRIANGL_2
#define TRIANGLE_3

void main()
{
	setlocale(LC_ALL, "");
#ifdef STAR
	int n;
	cout << "Geometry" << endl;
	cout << "¬ведите размер фигуры"<<' ';
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			cout << '*' << ' ';
		}
		cout << endl;
	}
#endif // STAR
	
#ifdef TRINGL
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRINGL

#ifdef TRIANGL_2
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGL_2

#ifdef TRIANGLE_3
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << "  ";
		for (int j = i; j < n; j++)
			cout << "* ";

		cout << endl;
	}
#endif // TRIANGLE_3



}