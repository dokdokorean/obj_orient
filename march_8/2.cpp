#include <iostream>
using namespace std;

int g=20;

int add(int x, int y){
    return x+y;
}

int main(){ // -> 객체로 일하는데 왜 main 이 필요할까? = 
    int a,b,sum;
    cout<<"두정수를 입력하세요>>";
    cin>>a>>b;
    sum = a+b;
    cout <<"합은"<<sum<<"\n";
    cout<<"합은"<<add(a,b)<<"\n";
    cout<<"전역변수 g값은"<<g<<"\n";

    return 0;//-> 생력하면 자동으로 0이 생성된다.(main 한정)
}