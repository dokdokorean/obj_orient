#include <iostream>//->stdio 를 업그레드 한 버전이라고 한다.
using namespace std;//객체 안에 있는 함수들 중에서 중복되는 이름이 생길 수 있음 -> 이를 방지하기 위해 이름 공간을 만들어줌

int g=20;

int add(int x,int y){
    return x+y;
}

int main(){
    int a,b;
    cin>>a>>b;//-> c in 과 부등호를 사용하여 입력할 건지, 출력할 건지 알려준다.
    cout << add(a,b);//-> c in 과 부등호를 사용하여 입력할 건지, 출력할 건지 알려준다.
    return 0;
} // -> 메인 함수는 운영체제에서 자동으로 리턴 값을 받아준다. (메인 함수를 넣으면 자동으로 실행된다고 생각하면 된다.)