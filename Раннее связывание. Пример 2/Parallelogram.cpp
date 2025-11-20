#include <iostream>
using namespace std;
#include "Parallelogram.h"

void Parallelogram::SetDimension(double height, double value)
{
	Figure::SetDimension(value, value);
	h = height;
}

void Parallelogram::ShowArea() const
{
	cout << "Square of parallelogram: " << m_value1 * h << endl;
}
