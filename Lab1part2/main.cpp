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

<<<<<<< HEAD
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
 //Triangle Tri;
  //Tri.setWidth(5);
 //Tri.setHeight(7);
 // Print the area of the object.
 //cout << "Total Triangle area: " << Tri.getArea() << endl;

 Rectangle rect;

 rect.setWidth(2);
 rect.setHeight(3);

 cout << rect.getArea() << endl;
 return 0;
=======
};

int main(void)
{
    Triangle Tri;
    Circle cir;

    cir.setWidth(5);

    Tri.setWidth(5);
    Tri.setHeight(7);
// Print the area of the object.
    cout << "Total Triangle area: " << Tri.getArea() << endl;
    cout << "Area of Circle: " << cir.getArea() << endl;
    return 0;
>>>>>>> a1f4823298b0cea9a798a71db99789533eb4528f
}
