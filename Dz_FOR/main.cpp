#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define FIBONACHI
//#define FIBONACHI_2
//#define ROW_OUTPUT
//#define PRIME_NUMBERS
//#define PPRIME_NUMBERS_2
//#define PERFECT_NUMBERS
//#define PERFECT_NUMBERS_2
//#define PITHAGORAS_TABLE
//#define MULTIPLICATION_TABLE

void main()
{
	setlocale(LC_ALL, "ru");

#ifdef FIBONACHI

	int n;
	int first_number = 0;
	int second_number = 1;
	int sum = 0;
	cout << "\t\t��� ��������" << endl;
	cout << "������� ������ �������� ���� ��������" << " "; cin >> n;
	if (n)
	{
		for (int i = 0; i <= n; i++)
		{
			first_number = second_number;
			second_number = sum;
			sum = first_number + second_number;
			if(sum<=n)
			cout << sum << '\t';
		}
		cout << endl;
	}
	else 
		cout << "������� ������������ ��������" << endl;
	

#endif // FIBONACHI

#ifdef FIBONACHI_2
	int n;
	cout << "\t\t��� ��������" << endl;
	cout << "������� ������ �������� ���� �������� "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		cout << a << "\t";
#endif // FIBONACHI_2




#ifdef ROW_OUTPUT

	int n;
	int first_number = 0;
	int second_number = 1;
	int sum = 0;

	cout << "����� ��������� ���������� ����� �� ���� ��������" << endl;
	cout << "������� ���������� �����"<<' ' << endl; cin >> n;

	for (int i = 0; i < n; i++)
	{
		first_number = second_number;
		second_number = sum;
		sum = first_number + second_number;
		cout << sum << '\t';
	}
		cout << endl;
}

#endif // ROW_OUTPUT


#ifdef PRIME_NUMBERS

	int n;

	cout << "������� ���������� ������� �����"; cin >> n;

	for (int i = 2; i <= n; i++)
	{
		if  (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)
			cout << i << ' ';
		else if (i == 2 || i == 3 || i==5 || i==7)
			cout << i << ' ';
	}
#endif // PRIME_NUMBERS

#ifdef PPRIME_NUMBERS_2
	int n;
	cout << "������� ���������� ������� ����� "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true;//����������� ��� ����� �������,
		// �� ��� ����� ���������
		for (int j = 2; j < i; j++) //��������� ������� ��� �������� j=2, � ��������� ���� ����� j<i
		{
			if (i % j == 0)// ���� ����� 
			{
				simple = false;
				break;
			}

		}
		if (simple) cout << i << "\t";
	}
	cout << endl;
#endif // PPRIME_NUMBERS_2



#ifdef PERFECT_NUMBERS

	int n;
	int sum;

	cout << "��� ����������� �����" << endl;
	cout << "������� ���������� �����"<<' '; cin >> n;

	for (int i = 6; i <= n; i++)
	{
		sum = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			sum += j;
		}
		if (sum == i)
		cout << i << ' ';
	}
		
		
#endif // PERFECT_NUMBERS

#ifdef PERFECT_NUMBERS_2
	int n;
	cout << "��� ����������� �����" << endl;
	cout << "������� ���������� ����� "; cin >> n;

	for (int i = 2; i <= n; i++)
	{
		bool perfect = true;
		int sum = 0;
		for (int j = 1; j <= i / 2; j++)
		{
			if (i % j == 0)
				sum += j;
		}
		if (sum == i)
			cout << i << ' ';
	}
	cout << endl;
#endif // PERFECT_NUMBERS_2



#ifdef PITHAGORAS_TABLE

	cout << "\t\t������� ��������" << endl << endl;
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 2; j <= 9; j++)
		{
			cout << "\t" << i * j;
		}
		cout << endl;
	}
#endif // PITHAGORAS_TABLE


#ifdef MULTIPLICATION_TABLE

	cout << "������� ���������" << endl;
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 2; j <= 9; j++)
		{
			cout << "\t"<<i << "*" << j << "=" << i * j<<endl;
		}
		cout << endl;
	}
#endif // MULTIPLICATION_TABLE


}