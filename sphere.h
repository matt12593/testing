#ifndef SPHERE_H
#define SPHERE_H

#include <iostream>
using std::ostream;
using std::endl;
using std::cout;


class Sphere
{
// Scope of class is private by default
private:
    double radius; 

public:
    Sphere();
    Sphere( double radius );
    void setRadius( double newRadius );

    double getRadius();
    double getArea();
    double getVolume();

    void display( ostream& out );

};

#endif


