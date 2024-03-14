#include <iostream> //for 문 반복문
using namespace std;

int main(){
    int i,a,b,sum=0;
    cout<<"두개의 정수입력";
    cin>>a>>b;
    for (i=a;i<=b;i++){
        sum +=i;
    }
    cout<<a<<"에서"<<b<<"까지 합은"<<sum;

}