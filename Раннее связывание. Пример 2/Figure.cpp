#include <iostream>

#include "Figure.h"

using namespace std;

void Figure::SetDimension(const double value1)
{
    SetDimension(value1, value1);
}

void Figure::SetDimension(const double value1, const double value2)
{
    m_value1 = value1;
    m_value2 = value2;
}

void Figure::ShowArea() const
{
    cout << "Value is undefined" << endl;
}

void Figure::Init()
{
    cout << "Enter the first side:" << endl;
    cin >> m_value1;
    cout << "Enter the second side side:" << endl;
    cin >> m_value2;
}

void Figure::Print()
{
    cout << "Value is undefined" << endl;
}

void Figure::ShowLength()
{
    cout << "Value is undefined" << endl;
}
