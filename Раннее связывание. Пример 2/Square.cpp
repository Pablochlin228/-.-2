#include <iostream>
using namespace std;
#include "Square.h"

void Square::ShowArea() const
{
	cout << "Square of square: " << m_value1 * m_value2 << endl;
}
