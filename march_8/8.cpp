#include <iostream>
using namespace std;
int main(){
    int a;
    while (true)
    {
        cout <<"정수입력:";
        cin >> a;
        if (a==0)
        {
            cout << "stop process";
            break;
        }
        if (a%3==0)
        {
            cout << "yes\n";
            continue;
        }
        cout << "no\n";
    }
}