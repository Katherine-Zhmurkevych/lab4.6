#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int n, k;
	P = 1;
	k = 1;
	while (k <= 25)
	{
		S = 0;
		n = k;
		while (n <= k * k)
		{
			S += 1.0 / n;
			n++;
		}
		P *= (1.0 + S);
		k++;
	}
	cout << P << endl;

	P = 1.0;
	k = 1.0;
	do {
		S = 0;
		n = k;
		do {
			S += 1.0 / n;
			n++;
		} while (n <= k * k);
		P *= (1.0 + S);
		k++;
	} while (k <= 25.0);
	cout << P << endl;

	P = 1;
	for (k = 1.0; k <= 25.0; k++)
	{
		S = 0;
		for (n = k; (n <= k * k); n++)
		{
			S += 1.0 / n;
		}
		P *= (1.0 + S);
		}
	cout << P << endl;

	P = 1;
	for (k = 25.0; k >= 1.0; k--)
	{
		S = 0;
		for (n = k * k; n >= k; n--)
		{
			S += 1.0 / n;
		}
		P *= (1.0 + S);
	}
	cout << P << endl;
	return 0;
	}