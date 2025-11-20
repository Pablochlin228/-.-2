#pragma once

#include "Figure.h"

class Triangle :
    public Figure
{
public:

    void ShowArea() const;
    void Init();
    void Print();
    void ShowLength();
};