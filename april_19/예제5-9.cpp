#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle(const Circle& c); // -> const 를 쓰는 이유? : 목적이 복사이다. 원본은 바뀌는게 아니기 때문이다.
    Circle(){radius=1;}
    Circle(int raidus){this -> radius = raidus;}
    double getArea(){return 3.14 * radius * radius;}
};
 Circle:: Circle(const Circle& c)
{
    this -> radius = c.radius;
    cout<< "복사 생성자 실행 radius" << radius << endl;
}
int main(){
    Circle src(30);
    Circle dest(src);
    
    cout << "원본의 면적"<< src.getArea() << endl;
    cout << "사본의 면적" << dest.getArea() << endl;
}
