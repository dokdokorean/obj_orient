#include <iostream>
using namespace std;

class Rectangle
{
public:
int width,height;
double getArea();
};
double Rectangle::getArea(){ //<- 어느 객체에 함수인지
    return width*height;
}
int main(){
    Rectangle rect;
    rect.width = 3;
    rect.height = 5;
    cout << rect.getArea();
}