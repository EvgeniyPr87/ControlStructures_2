#include<iostream>
#include<conio.h>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define Enter 13
#define Escape 27
#define UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77

//#define IF_ELSE_SHOOTER
//#define SWITCH_CASE_SHOOTER

void main()
{
	setlocale(LC_ALL, "ru");
#ifdef IF_ELSE_SHOOTER
	cout << "Shooter" << endl;
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key== UpArrow) cout << "вперед" << endl;
		else if (key == 's' || key == 'S'|| key == DownArrow) cout << "назад" << endl;
		else if (key == 'a' || key == 'A' || key== LeftArrow) cout << "влево" << endl;
		else if (key == 'd' || key == 'D'|| key== RightArrow) cout << "вправо" << endl;
		else if (key == Enter) cout << "огонь" << endl;
		else if (key == Escape) cout << "выход" << endl;
		else if (key == ' ') cout << "прыжек" << endl;
		else if(key!= -32) cout << "Error" << endl;
	} while (key !=27 || key!=Escape);
#endif IF_ELSE_SHOOTER

#ifdef SWITCH_CASE_SHOOTER
	char key;

	do
	{
		key = _getch();
		//cout << (int)key << endl;

		switch (key)
		{
		case UpArrow:
		case 'W':
		case 'w': cout << "вперед" << endl; break;
		case DownArrow:
		case 'S':
		case 's': cout << "назад" << endl; break;
		case LeftArrow:
		case 'A':
		case 'a': cout << "влево" << endl; break;
		case RightArrow:
		case 'D':
		case 'd': cout << "вправо" << endl; break;
		case ' ': cout << "прыжек" << endl; break;
		case Enter: cout << "огонь" << endl; break;
		case Escape: cout << "выход" << endl; break;
		case -32:  break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
#endif // SWITCH_CASE_SHOOTER

}