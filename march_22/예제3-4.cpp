#include <iostream>
using namespace std;

class Circle
{
    public:
    int radius;
    Circle();
    Circle(int r);
    double getArea();
};
//생성자 생성하기
Circle::Circle(){
    Circle(1); // <- 위임연산자
}
Circle::Circle(int r){ // <- 이거 왜 오류 뜸? (class 선언할때 안 적었었음)
    radius = r;
    cout << radius << "\n";
}
double Circle::getArea(){ //<- 어느 객체에 함수인지
    return 3.14*radius*radius;
}
int main(){
    Circle donut;
    double area = donut.getArea();
    cout << "donut 면적은" << area << "\n";

    Circle pizza(30);
    int pizza_area = pizza.getArea();
    cout << "pizza 면적은" <<pizza_area;
}