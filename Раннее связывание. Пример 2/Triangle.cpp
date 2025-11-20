#include <iostream>

#include "Triangle.h"

using namespace std;

void Triangle::ShowArea() const
{
    cout << "Square of triangle: " << 0.5 * m_value1 * m_value2 << endl;
}

void Triangle::Init()
{
	cout << "Enter the side: " << endl;
	cin >> m_value1;
	cout << "Enter the height: " << endl;
	cin >> m_value2;
}

void Triangle::Print()
{
	cout << "Area:" << endl;
	ShowArea();
	cout << "Length:" << endl;
	ShowLength();
}

void Triangle::ShowLength()
{
	cout << m_value1 << endl;
}
