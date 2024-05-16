#include <iostream>
using namespace std;

class Rectangle
{
public:
    int width,height;
    Rectangle();
    Rectangle(int w, int h);
    Rectangle(int s);
    bool issquare();
};
Rectangle::Rectangle() : Rectangle(1, 1) // <- 위임연산자 쓰려면 C++11? -std=c++11 이거 붙여서 써야되는데 이거 왜 이럼?
{
}
 Rectangle:: Rectangle(int w,int h)
{
    width=w;
    height=h;
}
 Rectangle:: Rectangle(int s)
{
    width=height=s;
}
bool Rectangle::issquare(){
    if (width == height) return true;
    else return false;
}
int main(){
    Rectangle rect1;
    Rectangle rect2(3,5);
    Rectangle rect3(3);

    if (rect1.issquare()) cout << "rect1 은 정사각형이다";
    if (rect2.issquare()) cout << "rect2 은 정사각형이다";
    if (rect3.issquare()) cout << "rect3 은 정사각형이다";
}