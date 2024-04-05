#include <iostream>
using namespace std;

class Circle
{
    int radius;

public:
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; } //<- 왜 지랄임?
};
// 생성자 생성하기
Circle::Circle()
{
    Circle(1); // <- 위임연산자
    cout << "생성자 실행 radius =" << radius << endl;
}
Circle::Circle(int r)
{ // <- 이거 왜 오류 뜸? (class 선언할때 안 적었었음)
    radius = r;
    cout << "생성자 실행 radius=" << radius << endl;
}
Circle::~Circle()
{
    cout << "소멸자 실행 Radius =" << radius << endl;
}
int main()
{
    Circle *p, *q;
    p = new Circle;
    q = new Circle(30);
    cout << p->getArea() << endl
         << q->getArea() << endl;
    delete p;
    delete q; // <- 프로그램이 종료되었을때 제어 불가능 , 다른 프로그램을 시작했을 때 다른 포인터로 접근해버리면 저장공간이 붕 떠버림
}