#include <iostream>
using namespace std;

template<typename T>
T Max(const T& a, const T& b, const T& c)
{
	T maxItem = a;
	if (a >= b)
	{
		if (c > a)
		{
			maxItem = c;
		}
	}
	else
	{
		if (b >= c)
		{
			maxItem = b;
		}
		else
		{
			maxItem = c;
		}
	}
	return maxItem;
}

void main()
{
	cout << "testing max int:" << endl;
	cout << "the resault of max(1,2,3)" << Max(1, 2, 3) << endl;
	cout << "the resault of max(3,2,1)" << Max(3, 2, 1) << endl;
	cout << "the resault of max(1,3,2)" << Max(1, 3, 2) << endl;

	cout << "testing max double:" << endl;
	cout << "the resault of max(1.5,1.8,1.9)" << Max(1.5, 1.8, 1.9) << endl;
	cout << "the resault of max(1.9,1.8,1.5)" << Max(1.9, 1.8, 1.5) << endl;
	cout << "the resault of max(1.5,1.9,1.8)" << Max(1.5, 1.9, 1.8) << endl;
}