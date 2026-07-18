#include "Triangle.h"
#include <iostream>
#include <cmath>

using namespace std;

Triangle::Triangle()
{
    vertex1 = nullptr;
    vertex2 = nullptr;
    vertex3 = nullptr;
}

Triangle::Triangle(Point p1, Point p2, Point p3)
{
    vertex1 = new Point(p1);
    vertex2 = new Point(p2);
    vertex3 = new Point(p3);
}

Triangle::~Triangle()
{
    delete vertex1;
    delete vertex2;
    delete vertex3;
}

void Triangle::translate(int d, char axis)
{
    vertex1->translate(d, axis);
    vertex2->translate(d, axis);
    vertex3->translate(d, axis);
}

void Triangle::display()
{
    cout << "Vertex 1: ";
    vertex1->display();
    cout << endl;

    cout << "Vertex 2: ";
    vertex2->display();
    cout << endl;

    cout << "Vertex 3: ";
    vertex3->display();
    cout << endl;
}

double Triangle::calcArea()
{
    // Vector AB

    double ax = vertex2->getX() - vertex1->getX();
    double ay = vertex2->getY() - vertex1->getY();
    double az = vertex2->getZ() - vertex1->getZ();

    // Vector AC

    double bx = vertex3->getX() - vertex1->getX();
    double by = vertex3->getY() - vertex1->getY();
    double bz = vertex3->getZ() - vertex1->getZ();

    // Cross Product

    double cx = ay * bz - az * by;
    double cy = az * bx - ax * bz;
    double cz = ax * by - ay * bx;

    // Magnitude

    double magnitude = sqrt(cx * cx + cy * cy + cz * cz);

    return magnitude / 2.0;
}