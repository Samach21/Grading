#include<iostream>

using namespace std;

int result(int, int, int);

int main()
{
	int a[3];
	int* n = a;
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
		if (a[i] < 0 || a[i] > 30 && i < 2)
		{
			cout << "ERROR";
		}
		else if (a[i] < 0 || a[i] > 40 && i == 2)
		{
			cout << "ERROR";
		}
	}
	int r = result(*n, *(n + 1), *(n + 2));
	if (r >= 80 && r <= 100)
	{
		cout << "A";
	}
	else if (r >= 75 && r < 80)
	{
		cout << "B+";
	}
	else if (r >= 70 && r < 75)
	{
		cout << "B";
	}
	else if (r >= 65 && r < 70)
	{
		cout << "C+";
	}
	else if (r >= 60 && r < 65)
	{
		cout << "C";
	}
	else if (r >= 55 && r < 60)
	{
		cout << "D+";
	}
	else if (r >= 50 && r < 55)
	{
		cout << "D";
	}
	else if (r >= 0 && r < 50)
	{
		cout << "F";
	}
	return 0;
}

int result(int a, int b, int c)
{
	int r;
	r = a + b + c;
	return r;
}