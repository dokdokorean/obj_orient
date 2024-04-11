#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout<< "여러줄의 문자열을 입력하세요. 입력의 끝은 & 문자입니다."<<endl;
    getline(cin,s,'&'); //-> cin 함수를 출력하고, 출력한 값을 s 에 저장하고 입력의 마지막은 & 로 구별한다.
    cin.ignore();
    string f,r;
    cout<< endl << "find:";
    getline(cin,f,'\n');

    cout << "replace:";
    getline(cin,r,'\n');

    int startindex =0;
    while (true)
    {
        int findex = s.find(f,startindex); //-> startindex 에서 f를 찾기 시작한다.
        if(findex == -1) break;
        s.replace(findex,f.length(),r);//-> findex로 부터 문자열 f의 길이만큼 문자열 r로 변경
        startindex = findex + r.length();
    }
    cout << s << endl;
    cout << startindex << endl;
}