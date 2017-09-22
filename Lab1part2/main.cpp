#include <iostream>
#include <math.h>
using namespace std;
// Base class
class Shape
{
public:
// pure virtual function providing interface framework.
    virtual int getArea() = 0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
protected:
    int width;
    int height;
};

class Triangle: public Shape
{
public:
    int getArea()
    {
        return (width * height)/2;
    }
};
class Circle: public Shape
{
public:
    getArea()
    {
        return (3.1415 * pow(width/2,2));
    }

class Rectangle: public Shape
{
public:
    int getArea()
    {
        return(width*height);
    }
};


int main(void)
{
 Triangle Tri;
 Tri.setWidth(5);
 Tri.setHeight(7);

 cout << "Total Triangle area: " << Tri.getArea() << endl;

 Rectangle rect;
 rect.setWidth(2);
 rect.setHeight(3);

 cout <<  "Total Rectangle area: " << rect.getArea() << endl;

 Circle circ;
 circ.setWidth(4);

 cout <<  "Total Circle area: " << circ.getArea() << endl;

 cout << "Total area of all shapes: " << Tri.getArea() + rect.getArea() + circ.getArea() << endl;
 return 0;

};


