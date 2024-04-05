#include <iostream>//버그 일어나는데 수정좀 해봐라
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
    Circle *pArray = new Circle[3];

    pArray[0].setRadius(10);
    pArray[1].setRadius(20);
    pArray[2].setRadius(30);

    for (int i=0;i<3;i++){
        cout<< pArray[i].getArea()<<endl;
    }

    Circle *p = pArray;
    for (int i=0;i<3;i++){
        cout << p->getArea() << endl;
        p++;
    }
    delete []pArray;
}