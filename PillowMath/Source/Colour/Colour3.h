#pragma once

#include <PillowCore.h>
#include <iostream>

#include "../Utility/MathematicalFunctions.h"

namespace Pillow
{
    struct Colour3
    {
        Colour3() : r(0.0f), g(0.0f), b(0.0f) {};
        Colour3(std::string hexCode) 
        {
            //Remove #

            //RRGGBB

            // 1 to 9 = 1 to 9
            // A to F = 10 to 15

            // Multiply the first diget by 16 eg. RR = F8 = (15*16) + 8 
        };
        Colour3(float red, float green, float blue) : r(Pillow::MathematicalFunctions::Clamp(red, 0.0f, 1.0f)), 
                                                        g(Pillow::MathematicalFunctions::Clamp(green, 0.0f, 1.0f)), 
                                                        b(Pillow::MathematicalFunctions::Clamp(blue, 0.0f, 1.0f)) {};
        Colour3(int red, int green, int blue) 
        {
            int re = Pillow::MathematicalFunctions::Clamp(red, 0, 255);
            int gre = Pillow::MathematicalFunctions::Clamp(green, 0, 255);
            int blu = Pillow::MathematicalFunctions::Clamp(blue, 0, 255);

            r = static_cast<float>(re) / 255.0f;
            g = static_cast<float>(gre) / 255.0f;
            b = static_cast<float>(blu) / 255.0f;
        };

        float r;
        float g;
        float b;
    };
}