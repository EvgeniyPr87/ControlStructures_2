#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define FACTORIAL// разбирали на занятии
#define ASCII_//разбирали на занятии

void main()
{
	setlocale(LC_ALL, "ru");
	//for(;;)
	//cout << "Hello FOR"<<endl;
#ifdef FACTORIAL
	int n;
	cout << "Введите количество итераций" << endl;
	cin >> n;
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "!=";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL

#ifdef ASCII_
	for (int i = 0; i < 256; i++) 
	{
		if (i % 16 == 0) cout << endl;// по 16 элементов в строке
		cout << (char)i; // вывод таблицы ASCII 
	}
#endif // ASCII_


}
