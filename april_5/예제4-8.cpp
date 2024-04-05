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
    double getArea() { return 3.14 * radius * radius; } //<- 왜 지랄임? = 두번 정의해서 ㅋㅋ
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
    int radius;
    while (true)
    {
        cout<< "정수 반지금 입력(음수이면 종료)>>";
        cin >> radius;
        if(radius < 0)break;
        Circle *p = new Circle(radius);
        cout << "원의 면적은 "<< p->getArea() << endl;
        delete p;
    }
}