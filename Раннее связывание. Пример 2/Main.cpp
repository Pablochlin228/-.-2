#include <iostream>

#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "rhombus.h"
#include "Square.h"
#include "Parallelogram.h"

using namespace std;

int main()
{
    Figure* figure = nullptr;

    int choice = 0;

    cout << "1. Square circle" << endl;
    cout << "2. Square rectangle" << endl;
    cout << "3. Square triangle" << endl;
    cout << "4. Square rhombus" << endl;
    cout << "5. Square square" << endl;
    cout << "6. Square parallelogram" << endl;
    cout << "Make your choice: ";

    cin >> choice;

    switch (choice)
    {
        case 1:
            figure = new Circle;
            figure->Init();
            break;
        case 2:
            figure = new Rectangle;
            figure->Init();
            break;
        case 3: 
            figure = new Triangle;
            figure->Init();
            break;
        case 4:
            figure = new rhombus;
            figure->Init();
            break;
        case 5:
            figure = new Square;
            figure->Init();
            break;
        case 6:
            figure = new Parallelogram;
            figure->Init();
            break;
    }

    figure->ShowArea();
    figure->Print();
    figure->ShowLength();
    //delete figure;

    return 0;
}