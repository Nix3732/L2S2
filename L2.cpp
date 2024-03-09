#include <iostream>
#include <cmath>
#include "Ellips.hpp"

int main()
{   
    int axis1, axis2;
    std::cin >> axis1 >> axis2;
    Ellipse c;
    c.setALL(axis1, axis2);

    std::cout << "Perimetr = " << c.Perimeter() << std::endl << "Ploshad' = " << c.Square() << std::endl;
    return 0;
}
