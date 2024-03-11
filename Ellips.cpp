#include <iostream>
#include <cmath>
#include "Ellips.hpp"
namespace ez
{
	void Ellipse::setALL(int l, int s)
	{
	if (l < 0 || s < 0)
	{
	    std::cout << "Negative semiaxis" << std::endl;
	}
	
	a = l;
	b = s;
	}

    	float Ellipse::Perimeter()
    	{
        	return 2 * acos(-1) * sqrt((pow(a, 2) + pow(b, 2)) / 2);
    	}

    	float Ellipse::Square()
    	{
        	return acos(-1) * a * b;
    	}
}
