#include <iostream>
using namespace std;
#include "Square.h"

void Square::ShowArea() const
{
	cout << "Square of square: " << m_value1 * m_value1 << endl;
}

void Square::Init()
{
    cout << "Enter the side:" << endl;
    cin >> m_value1;
}

void Square::Print()
{
    cout << "Area:" << endl;
    ShowArea();
    cout << "Length:" << endl;
    ShowLength();
}

void Square::ShowLength()
{
    cout << m_value1 << endl;
}
