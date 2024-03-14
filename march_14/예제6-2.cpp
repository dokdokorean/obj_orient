#include <iostream>
using namespace std;

int bigger(int a,int b){
    if (a>b){
        return a;
    }else return b;
}

bool divideby3(int n){
    if (n%3==0) return true;
    else return false;
}
int main(){
    int a,b,n;
    cout<< "두개의 정수 입력";
    cin >> a >> b;
    cout << "둘중에 큰 수" << bigger(a,b) << "\n";

    cout << "3의 배수?";
    cin >> n;
    if (divideby3(n)){
        cout <<"3의 배수가 맞다" << "\n";
    }else{
        cout <<"3의 배수가 아니다" << "\n";
    }
}