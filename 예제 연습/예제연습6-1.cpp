#include <iostream>
using namespace std;

void adder(int a, int b){
    int sum = 0;
    sum = a+b;
    cout <<a<<b<< "의 합은 " << sum << "입니다" << endl;
}

int main(){
    adder(1,2);

    int a,b;
    cout << "정수 두개를 입력하세요";
    cin >> a >> b;
    adder(a,b);
}