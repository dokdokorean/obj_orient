#include <iostream> //while 문 반복문
using namespace std;

int main(){
    int i, a,b,sum=0;
    cout<<"두개의 정수입력";
    cin>>a>>b;
    i=a;
    do
    {        
        sum+=i;
        i++;
        } while (i<=b);
    
    cout<<"에서"<<b<<"까지 합은"<<sum;

}