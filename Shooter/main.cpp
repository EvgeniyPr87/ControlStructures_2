#include<iostream>
#include<conio.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main()
{
	setlocale(LC_ALL, "ru");
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
			cout << endl<<"\t\t������" << endl; break;
		case 13:
			cout << "\t**********�����************" << endl; break;

		default: cout << "Error" << endl;
		}

	} while (true);

}