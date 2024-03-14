#include <iostream>
using namespace std;

int adder(int a,int b){
    int sum;
    sum = a+b;
    return sum;
}
int main(){
    int n = adder(13243,132143);
    cout << n << "\n";

    int a,b;
    cout << "두 정수를 입력해주세요 >>";
    cin >> a >> b;

    cout<<adder(a,b)<<"\n";
}