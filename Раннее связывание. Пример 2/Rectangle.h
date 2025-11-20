#pragma once

#include "Figure.h"

class Rectangle :
    public Figure
{
public:

    void ShowArea() const;
    void Init();
    void Print();
    void ShowLength();
};