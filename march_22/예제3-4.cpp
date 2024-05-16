#include <iostream>
using namespace std;

class Circle
{
    public:
    int radius;
    Circle();
    Circle(int r);
    ~Circle();
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
Circle::~Circle(){
    cout << "반지름" << radius << " 원 소멸 " << "\n";
}
double Circle::getArea(){ //<- 어느 객체에 함수인지
    return 3.14*radius*radius;
}
Circle globalDonut(1000);
Circle globalPizza(2000);

void f(){
    Circle fDonut(100);
    Circle fPizza(200);
}

int main(){
    Circle maindonut;
    double area = maindonut.getArea();
    cout << "donut 면적은" << area << "\n";

    Circle mainpizza(30);
    int pizza_area = mainpizza.getArea();
    cout << "pizza 면적은" <<pizza_area << "\n";

    return 0;
}