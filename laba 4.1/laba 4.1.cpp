#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i;
	double P;
	P = 1;
	i = 1;
	while (i <= 15)
	{
		P *= (sin(i) * sin(i) + cos(1.0 / i) * cos(1.0 / i)) / (i * i);
		i++;
	}
	cout << P << endl;
		P = 1;
	i = 1;
	do {
		P *= (sin(i) * sin(i) + cos(1.0 / i) * cos(1.0 / i)) / (i * i);
		i++;
	} while (i <= 15);
	cout << P << endl;
	P = 1;
	for (i = 1; i <= 15; i++)
	{
		P *= (sin(i) * sin(i) + cos(1.0 / i) * cos(1.0 / i)) / (i * i);
	}
	cout << P << endl;
	P = 1;
	for (i = 15; i >= 1; i--)
	{
		P *= (sin(i) * sin(i) + cos(1.0 / i) * cos(1.0 / i)) / (i * i);
	}
	cout << P << endl;
	return 0;
}
