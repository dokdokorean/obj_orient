#include <iostream>
#include <string>

using namespace std;

class Shape
{
private:
    int length;
protected:
    int getLength(){
        return length;
    }
public:
    Shape(int length)
    this ->length = length;
    virtual double getArea() =0;
    virtual double getParameter()=0;
};

Shape::Shape(/* args */)
{
}

Shape::~Shape()
{
}
