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
        setL(l);
        setSH(s);
    }

    void setL(int l)
    {
        if (l < 0)
        {
            std::cout << "Negative long semiaxis" << std::endl;
        }

        a = l;
    }

    void setSH(int s)
    {
        if (s < 0)
        {
            std::cout << "Negative short semiaxis" << std::endl;
        }

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
    int Baxis, Saxis;
    std::cin >> Baxis >> Saxis;
    Ellipse c;
    c.setL(Baxis);
    c.setSH(Saxis);

    std::cout << "Perimetr = " << c.Perimeter() << std::endl << "Ploshad' = " << c.Square() << std::endl;
    return 0;
}
