#include<iostream>
#include<conio.h>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define CALC
#define SHOOTER

void main()
{
setlocale(LC_ALL, "ru");

#ifdef CALC
	double number_1;
	double number_2;
	double result = 0;
	int s = 0;// �������
	char sign;

	while (true)
	{

		while (s == 0) // ��������� ���� �������� � ����� �������
		{
			cin >> number_1 >> sign >> number_2;
			s = s + 1;
			switch (sign)
			{
			case '+': result = number_1 + number_2; cout << result; break;
			case '-': result = number_1 - number_2; cout << result; break;
			case '*': result = number_1 * number_2; cout << result; break;
			case '/': result = number_1 / number_2; cout << result; break;
			default:cout << "Error: No operation " << endl;

			}
		}
		cin >> sign >> number_2;
		switch (sign)
		{
		case '+': result = result + number_2; cout << result; break;
		case '-': result = result - number_2; cout << result; break;
		case '*': result = result * number_2; cout << result; break;
		case '/': result = result / number_2; cout << result; break;
		default:cout << "Error: No operation " << endl;
		}
	}
#endif // CALC

	
#ifdef SHOOTER
	char key;
	do
	{
		key = _getch();
		/*cout << key << " " << (int)key << endl;*/

		switch (key)
		{
		case 119:
			cout << "\t\t*������*" << endl; break;
		case 97:
			cout << "\t*�����" << endl; break;
		case 100:
			cout << "\t\t\t\t������*" << endl; break;
		case 115:
			cout << "\t\t*�����*" << endl; break;
		case 32:
			cout << "\t\t=������=" << endl; break;
		case  27:
			cout << "\t\t �����" << endl; break;
			cout << endl << "\t\t������" << endl; break;
		case 13:
			cout << "\t    ******�����********" << endl; break;

		default: cout << "Error" << endl;
		}

	} while (true);

#endif // SHOOTER



}