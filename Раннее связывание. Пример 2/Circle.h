#pragma once

#include "Figure.h"

class Circle :
    public Figure
{
public:

    void ShowArea() const;
    void Init();
    void Print();
    void ShowLength() const;
};