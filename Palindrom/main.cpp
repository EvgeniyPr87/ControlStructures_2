#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define PALINDROM_// разбирали на занятии
//#define PALINDROM_EXPL// с пояснениями

void main()
{
	setlocale(LC_ALL, "ru");

#ifdef PALINDROM_
	cout << "Palindrom" << endl;
	int number;
	int revers = 0;//число записанное в обратном порядке
	cout << "Введите число"; cin >> number;
	int bufer = number;//Копия введенного числа
	while (bufer) //пока буфер не 0 будет true
	{
		revers *= 10;//сдвигаем разряд влево
		revers += bufer % 10;
		bufer /= 10;

	}
	cout << number << endl;
	cout << revers;
	if (revers == number)
	{
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "Обычное число" << endl;
	}
#endif // PALINDROM_

#ifdef PALINDROM_EXPL
	cout << "Программа определяющяя является ли введенное число палиндромом" << endl;
	int number;// число которое будет вводится с клавиатуры
	int revers = 0;// обратное число, которое нужно получить
	cout << "Введите ваше число" << ' '; cin >> number;
	int bufer = number; //буфер, будем использовать как копию введенного числа. Чтобы введенное число осталось неизменным
	while (bufer) // пока значение bufer=true(тоесть bufer не равен 0 ) будет выполняться цикл
	{
		revers *= 10; //выполняем сдвиг разряда
		revers += bufer % 10;// к revers прибавляем младший разряд числа 
		bufer /= 10; // убираем младший разряд
	}
	cout << revers << endl;
	if (revers == number)
	{
		cout << "Число палиндром" << endl;
	}
	else
	{
		cout << "Не палиндром" << endl;
	}
#endif // PALINDROM_EXPL




}

