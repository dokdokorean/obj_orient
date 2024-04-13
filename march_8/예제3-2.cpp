#include <iostream>
using namespace std;

int main(){
    int score,div;
    cout << "점수를 입력하세요>>";
    cin >> score;

    if (score > 100 || score <0){
        cout << "잘못 된 점수입니다.";
    }
    div = score/10;
    switch (div)
    {
        case 10:
            cout << "A+입니다";
            break;
        case 9:
            cout << "A입니다";
            break;
        case 8:
            cout << "B입니다";
            break;
        case 7:
            cout << "C입니다";
            break;
        case 6:
            cout << "D입니다";
            break;
        default:
            cout << "F입니다";
            break;
    }
}