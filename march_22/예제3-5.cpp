//멤버변수의 초기화와 위임생성자의 활용
#include <iostream>
using namespace std;

class Point{
    public:
    int x,y;
    Point();
    Point(int a, int b);
    void show();
};
    Point::Point():x(0),y(0){
        Point(0,0);
    }
    Point::Point(int a,int b){
        x=a;
        y=b;
    }
    void Point::show(){
        cout << "(" << x << "," << y << ")\n";
    }

int main(){
    Point origin;
    Point target(10,20);

    origin.show();
    target.show();
}