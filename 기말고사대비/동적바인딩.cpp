#include <iostream>
using namespace std;

class Shape
{
public:
    void paint(){
        draw();
    }
    virtual void draw(){
        cout << "Shape::draw() called" << endl;
    }
};
class Circle : public Shape{
    public:
     virtual void draw(){
        cout << "Circle::draw() called" << endl; //-> 기존 클래스가 아니라 파생 클래스에 할당되는 함수에 동적 바인딩 됨
     }
};
int main(){
    Shape *pShape = new Circle();
    pShape->paint();
    delete pShape; 
}

