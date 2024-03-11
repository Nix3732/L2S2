#pragma once
#include <iostream>
#include <cmath>

namespace ez
{
    class Ellipse
    {
        int a;
        int b;

    public:
        Ellipse() = default;
        Ellipse(int l, int s);

        void setALL(int l, int s);
     
        float Perimeter();
        
        float Square();
       
    };
}