#include <iostream>

#include "Rectangle.h"

using namespace std;

void Rectangle::ShowArea() const
{
    cout << "Square of rectangle: " << m_value1 * m_value2 << endl;
}

void Rectangle::Init()
{
	cout << "Enter the first side:" << endl;
	cin >> m_value1;
	cout << "Enter the second side side:" << endl;
	cin >> m_value2;
}

void Rectangle::Print()
{
	cout << "Area:" << endl;
	ShowArea();
	cout << "Length:" << endl;
	ShowLength();
}

void Rectangle::ShowLength()
{
	cout << m_value2 << endl;
}
