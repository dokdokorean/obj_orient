#include <iostream>
using namespace std;

class Shape{
    protected:
     virtual void draw(){}
};
class Circle : public Shape
{
    protected:
     virtual void draw(){

     }
};
class Rect : public Shape
{
    protected :
    virtual void draw(){

    }
};
class Line : public Shape
{
protected:
    virtual void draw()
    {
    }
};

