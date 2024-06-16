#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(1); // 1을 백터의 끝에 추가
    v.push_back(2); // 2를 백터의 끝에 추가
    v.push_back(3); // 3을 백터의 끝에 추가

    vector<int>::iterator it;

    for (it=v.begin();it != v.end(); it ++){
        int n = *it;
        n=n*2;
        *it = n;
    }
    for (it=v.begin();it!=v.end();it++){
        cout << *it << ' ';
    }
    cout << endl;
}
