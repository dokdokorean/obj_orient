#include <iostream>
using namespace std;

int main(){
    int n=10,m;
    char c='A';
    double d;

    int* p = &n;
    char* q = &c;
    double* r = &d;

    *p=25;
    *q='B';
    *r=3.14;
    m=*p+10;

    cout<<n<<' '<<*p;
    cout<<c<<' '<<*q;
    cout<<d<<' '<<*r;
    cout<<m;
}