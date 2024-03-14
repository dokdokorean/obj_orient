#include <iostream> //while 문 반복문
using namespace std;

int main(){
    int a,b,sum=0;
    cout<<"두개의 정수입력";
    cin>>a>>b;
    while (a<=b)
    {        
        sum +=a;
        a=a+1;
    }
    cout<<"에서"<<b<<"까지 합은"<<sum;

}