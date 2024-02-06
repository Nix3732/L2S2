#include <iostream>
#include <cmath>

class Ellipse
{
    int a;
    int b;

public:
    Ellipse() = default;
    Ellipse(int l, int s)
    {    
        setL(l, s);
    }

    void setALL(int l, int s)
    {
        if (l < 0 or s < 0)
        {
            std::cout << "Negative semiaxis" << std::endl;
        }

        a = l;
        b = s;
    }

    float Perimeter()
    {   
        return 2 * acos(-1) * sqrt((pow(a, 2) + pow(b,2))/2);
    }

    float Square()
    {
        return acos(-1) * a * b;
    }
};


int main()
{   
    int axis1, axis2;
    std::cin >> axis1 >> axis2;
    Ellipse c;
    c.setALL(axis1, axis2);

    std::cout << "Perimetr = " << c.Perimeter() << std::endl << "Ploshad' = " << c.Square() << std::endl;
    return 0;
}
