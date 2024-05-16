#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

class Bank
{
private:
    string name;
    string account;
    string pwd;
    int num;
    int my_money=0;
public:
    Bank(string n , string a, string p);
    int money();
    bool check();
    void person();
    void in();
    void out();
};
Bank::Bank(string n, string a, string p)
{
    name = n;
    account = a;
    pwd =p;
}
void Bank::person (){
    cout << "회원명 : " << name << endl;
    cout << "계좌번호 : " << account << endl;
    cout << "비밀번호 : " ;
    for (int i =0 ; i < pwd.size(); i++){
        cout << "*";
    }
    cout << endl;
}
bool Bank ::check()
{
    string input_a;
    string input_pwd;

    cout << "계좌번호 : ";
    cin >> input_a;
    cout << "비밀번호 : ";
    cin.ignore(); // 이전에 입력된 엔터 문자를 무시합니다.
    getline(cin, input_pwd);
    if (input_a == account && input_pwd == pwd)
    {
        return true;
    }
    else
    {
        cout << endl
             << "틀렸습니다." << endl;
        return false;
    }
}

void Bank :: in (){
    int a =0;
    if (check()){
        cout << endl << "입금할 금액 : ";
        cin >> a;
        my_money +=a;
        cout << "입금성공!" << endl;
    }
}
void Bank :: out(){
    int a =0;
    if (check()){
        cout << endl << "출금할 금액 : ";
        cin >> a;
        my_money -=a;
        if (my_money <= 0){
            cout<< "잔액이 부족합니다." << endl;
            my_money +=a;
        }
        else{
            cout <<"출금 성공!"<< endl;
        }
    }
}
int Bank :: money (){
    cout << "+++++++++++++++++++++++++"<< endl;
    cout << "++ 은행 관리 프로그램 ++" << endl;
    cout << "+++++++++++++++++++++++++" << endl;
    while (true)
    {
       cout << "1.회원보기 2.입금 3.출금하기 4.잔액 출력하기" << endl;
       cout << "번호 입력 : ";
       cin >> num;
       switch (num)
        {
        case 1:
            person();
            cout << "실행";
            break;
        case 2:
            in();
            break;
        case 3:
            out();
            break;
        case 4:
            cout << "현재 잔액 : " << my_money << endl;
            break;
        case 5:
            cout << "은행 관리를 끝냅니다." << endl;
            exit(0);
        default:
            break;
        }
    }
}
int main(){
    Bank bk("배진우","111-1111","1864");
    bk.money();
}
