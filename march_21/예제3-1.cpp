#include <iostream>
using namespace std;

class Circle
{
public:
    int radius;
    double getarea();
};
 double Circle:: getarea()
{
    return radius*radius*3.14;
}

int main(){
    Circle donut;
    double donut_area;
    donut.radius = 1;
    donut_area=donut.getarea();
    cout << "도넛의 넓이는 " << donut_area;
}
