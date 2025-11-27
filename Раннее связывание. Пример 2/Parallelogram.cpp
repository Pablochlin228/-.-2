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

void Parallelogram::Init()
{
	cout << "Enter the side: " << endl;
	cin >> m_value1;
	cout << "Enter the height: " << endl;
	cin >> h;
}

void Parallelogram::Print()
{
	cout << "Area:" << endl;
	ShowArea();
	cout << "Length:" << endl;
	ShowLength();
}

void Parallelogram::ShowLength() const
{
	cout << m_value1 << endl;
}
