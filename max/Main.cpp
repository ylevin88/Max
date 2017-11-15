#include <iostream>
#include <math.h>
using namespace std;

template<typename T, typename Comperer>
T Max(const T& a, const T& b, const T& c, Comperer comperer)
{
	T maxItem = a;
	if (comperer(a, b))
	{
		if (comperer(c, a))
		{
			maxItem = c;
		}
	}
	else
	{
		if (comperer(b, c))
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

bool maxInts(int a, int b)
{
	return a >= b ? true : false;
}

bool minInts(int a, int b)
{
	return a >= b ? false : true;
}

class comperDoubles
{
public:
	comperDoubles(bool minComper) :m_minComper(minComper)
	{};

	bool operator()(double a, double b)
	{
		bool resault = false;
		if (m_minComper)
		{
			resault = a > b;
		}
		else
		{
			resault = b > a;
		}
		return resault;
	}
private:
	bool m_minComper;
};

void main()
{
	cout << "testing max int:" << endl;
	cout << "the resault of Max(1, 2, 3, maxInts): " << Max(1, 2, 3, maxInts) << endl;
	cout << "the resault of Max(1, 2, 3, minInts): " << Max(1, 2, 3, minInts) << endl;

	cout << "testing max double:" << endl;
	cout << "the resault of max(1.9, 2.3, 3.2, comperDoubles(true)): " << Max(1.9, 2.3, 3.2, comperDoubles(true)) << endl;
	cout << "the resault of max(1.9, 2.3, 3.2, comperDoubles(false)): " << Max(1.9, 2.3, 3.2, comperDoubles(false)) << endl;
}