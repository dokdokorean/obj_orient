#include <iostream> //while 문 반복문 -> 무슨 차이임..?
using namespace std;

int main(){
    int i,a,b,sum =0;
    cout << "두개의 정수 입력>>";
    cin >> a >> b;

    i=a;

    while (i<=b)
    {
        sum+=i;
        i++;
    }
    
    cout<< a << "에서"<< b << "까지 합은" << sum;

}