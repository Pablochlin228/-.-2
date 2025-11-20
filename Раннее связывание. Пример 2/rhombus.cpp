#include <iostream>
using namespace std;
#include "rhombus.h"

void rhombus::SetDimension(double height, double value)
{
	Figure::SetDimension(value, value);
	h = height;
}

void rhombus::ShowArea() const
{
	cout << "Square of rhombus: " << m_value1 * h << endl;
}
