#include <iostream>
using namespace std;

#include "circle.h"
//생성자 생성하기
Circle::Circle(){
    radius = 1;
    cout << radius << "\n";
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
    donut.radius =1;
    double area = donut.getArea();
    cout << "donut 면적은" << area << "\n";

    Circle pizza;
    pizza.radius = 30;

    area = pizza.getArea();
    cout << "pizza" <<area;
}