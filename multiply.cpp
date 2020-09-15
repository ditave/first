#include<iostream>
using namespace std;

int multiply(int a, int b)
{
	int sum = 0;
	int sign = 0;
	if (b < 0)
	{
		b = 0 - b;
		sign = 1;
	}

	while (b)
	{
		if (b & 1)
			sum += a;
		a = a << 1;
		b = b >> 1;
	}
	if (sign == 1)
		return -sum;
	else
		return sum;
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << multiply(a, b) << endl;
}