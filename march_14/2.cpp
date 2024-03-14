#include <iostream>
using namespace std;

int main(){
    int score,div;
    char grade;
    do
    {    
        cout << "0~100의 범위에 있는 점수를 입력하세요.:";
        cin >> score;
    } while (score>100 | score<0);
    div=score/10;
        switch (div)
        {
        case 10:
            grade = 'A';
            break;
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'b';
            break;
        case 7:
            grade = 'c';
            break;
        case 6:
            grade = 'd';
            break;
        default: //나머지 조건이 해당됨
            grade ='F';
            break;
        }
        cout <<  grade << "\n";
}