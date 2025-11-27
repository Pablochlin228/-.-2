#pragma once
#include "Figure.h"
class rhombus:public Figure
{
	double h;
public:
	void SetDimension(double h, double value);
	void ShowArea() const;
	void Init();
	void Print();
	void ShowLength() const;
};

