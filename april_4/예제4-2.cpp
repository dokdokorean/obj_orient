#include <iostream> // -> 배열로 객체를 설정하는 방법
using namespace std;

class Circle
{
    int radius;

public:
    Circle() { radius = 1; }
    Circle(int r) { radius = r; } // -> 생성자라서 한번 밖에 안된다.
    void setRadius(int r){radius = r;} // -> 언제든지 원할때 호출 할 수 있다.
    double getArea();
};

double Circle::getArea()
{
    return 3.14 * radius * radius;
}

int main()
{
    Circle circleArray[3];

    circleArray[0].setRadius(10);
    circleArray[1].setRadius(20);
    circleArray[2].setRadius(30);

    for (int i=0;i<3;i++){
        cout << "Circle" << i << "의 면적은" << circleArray[i].getArea() << "\n";
    }
    Circle *p;
    p = circleArray;
    for (int i=0;i<3;i++){
        cout << "Crcle" << i << "의 면적은" << p->getArea() << "\n";
        p++;
    }
}
