#include <iostream>
using namespace std;

int main(){
    double time,pay,overtime =0.00;
    cout<<"업무 시간을 입력하세요:";
    cin>>time;
    cout<<"시간당 급여를 입력하세요:";
    cin >> pay;
    cout << "일반 급여 = " << time*pay << "\n";
    if (time>40.00){
        overtime = (time-40.00)*pay*0.30;
        cout << "초과 근무에 대한 급여 = " << overtime << "\n";
    }else{
        cout << "초과 근무에 대한 급여 = " << "0" << "\n";
    }
    cout << "전체 급여 =" << time*pay + overtime << "\n";
}