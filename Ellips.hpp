#pragma once
#include <iostream>
#include <cmath>

class Ellipse
{
    int a;
    int b;

public:
    Ellipse() = default;
    Ellipse(int l, int s);

    void setALL(int l, int s)
    {
        if (l < 0 || s < 0)
        {
            std::cout << "Negative semiaxis" << std::endl;
        }

        a = l;
        b = s;
    }

    float Perimeter()
    {
        return 2 * acos(-1) * sqrt((pow(a, 2) + pow(b, 2)) / 2);
    }

    float Square()
    {
        return acos(-1) * a * b;
    }
};