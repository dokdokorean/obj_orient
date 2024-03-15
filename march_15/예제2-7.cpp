#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string song("tomorrow");
    string singer("me");
    string answer;

    cout << song+"를 부른 가수는";
    cout << "첫 글자는" << singer[0] << "??";

    getline(cin,answer);
    if (answer == singer){
        cout << "맞았습니당";
    }else{
        cout << "틀렸습니당";
    }
}