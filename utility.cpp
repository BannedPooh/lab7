// utility.cpp
#include "utility.h"
// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    


// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

bool approxEqual(double v1, double v2, double tolerance)
{
    if (fabs(v1-v2) < tolerance)
        return true;
    else
        return false;
}
