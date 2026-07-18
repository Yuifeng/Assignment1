#include "Point.h"

Point::Point()
{
    x = 0;
    y = 0;
    z = 0;
}

Point::Point(int x, int y, int z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Point::~Point()
{
}

int Point::translate(int d, char axis)
{
    if(axis == 'x')
    {
        x = x + d;
    }
    else if(axis == 'y')
    {
        y = y + d;
    }
    else if(axis == 'z')
    {
        z = z + d;
    }
    else
    {
        return -1;
    }

    return 0;
}

void Point::display()
{
    cout << "(" << x << ", " << y << ", " << z << ")";
}

int Point::getX()
{
    return x;
}

int Point::getY()
{
    return y;
}

int Point::getZ()
{
    return z;
}