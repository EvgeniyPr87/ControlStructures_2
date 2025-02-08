#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
//#define CALC_SWITCH
//#define CALC_SWITCH_DUBL

void main()
{
	setlocale(LC_ALL, "ru");

	double number_1;
	double number_2;
	char sign;

#ifdef CALC_SWITCH
	cin >> number_1; //разделяем вод на две позиции
	do
	{
		cin >> sign >> number_2;

		switch (sign)
		{
		case '+':number_1 += number_2; break;
		case '-':number_1 -= number_2; break;
		case '*':number_1 *= number_2; break;
		case '/':number_1 /= number_2; break;
		default:cout << "Error: No operation " << endl;
		}
		cout << "=";
		cout << number_1;
	} while (true);
#endif // CALC_SWITCH

#ifdef CALC_SWITCH_DUBL
	cin >> number_1;
	do
	{
		cin >> sign >> number_2;
		switch (sign)
		{
		case '+': number_1 += number_2; break;
		case '-': number_1 -= number_2; break;
		case '*': number_1 *= number_2; break;
		case '/': number_1 /= number_2; break;
		default: cout << "Error: No operation" << endl;
		}
		cout << "="; cout << number_1;
	} while (true);
#endif // CALC_SWITCH_DUBL


	

}