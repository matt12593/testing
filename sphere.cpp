#include "sphere.h"

#define _USE_MATH_DEFINES
#include <cmath>

Sphere::Sphere()
{
    radius = 1;
}


Sphere::Sphere( double radius )
{

    if ( radius > 0 )
    {

        this->radius = radius;
    }
    else
    {
        radius = 1.0;
    }
}
void Sphere::setRadius( double newRadius )
{

    if ( radius > 0 )
    {
        this->radius = newRadius;
    }
    return;
}

double Sphere::getRadius()
{
    return radius;
}

double Sphere::getVolume()
{
    
    return 4.0 / 3.0 * M_PI * radius * radius * radius;
}

double Sphere::getArea()
{
    return 4 * M_PI * radius * radius;
}

void Sphere::display( ostream& out )
{
    out << "Sphere: " << radius << " Volume: " << getVolume();
}

int main () { return 0; }
