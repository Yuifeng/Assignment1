#include <iostream>
#include "Triangle.h"

using namespace std;

int main()
{
    int x, y, z;

    cout << "Enter Point 1 (x y z): ";
    cin >> x >> y >> z;

    Point p1(x, y, z);

    cout << "Enter Point 2 (x y z): ";
    cin >> x >> y >> z;

    Point p2(x, y, z);

    cout << "Enter Point 3 (x y z): ";
    cin >> x >> y >> z;

    Point p3(x, y, z);

    Triangle t(p1, p2, p3);

    int choice;

    do
    {
        cout << "\n1. Display Triangle" << endl;
        cout << "2. Translate Triangle" << endl;
        cout << "3. Calculate Area" << endl;
        cout << "0. Exit" << endl;

        cin >> choice;

        if(choice == 1)
        {
            t.display();
        }
        else if(choice == 2)
        {
            int d;
            char axis;

            cout << "Distance: ";
            cin >> d;

            cout << "Axis (x,y,z): ";
            cin >> axis;

            t.translate(d, axis);
        }
        else if(choice == 3)
        {
            cout << "Area = " << t.calcArea() << endl;
        }

    } while(choice != 0);

    return 0;
}