#pragma once
#include "Figure.h"
class Square : public Figure
{
public:
	void ShowArea() const;
	void Init();
	void Print();
	void ShowLength();
};

