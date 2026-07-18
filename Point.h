#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std;

class Point
{
private:
    int x;
    int y;
    int z;

public:
    Point();                 // Default constructor
    Point(int x, int y, int z); // Constructor

    ~Point();                // Destructor

    int translate(int d, char axis);

    void display();

    int getX();
    int getY();
    int getZ();
};

#endif