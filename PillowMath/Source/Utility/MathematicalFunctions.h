#pragma once

#include "../PillowCore.h"

namespace Pillow
{
    class MathematicalFunctions
    {
    public:
        
        template<Arithmetic T>
        static T& Clamp(T value, T min, T max)
        {
            return (value < min) ? min : (value > max) ? max : value;
        }

        template<Arithmetic T>
        static T Lerp(T alpha, T min, T max)
        {
            //TODO: Finish Lerp
            return alpha;
        }
    };
}