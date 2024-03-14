#include <iostream>
using namespace std;

int main(){
    int row,col,i,j;
    cout << "행의 수를 입력하세요 : ";
    cin >> row;
    cout << "열의 수를 입력하세요 : ";
    cin >> col;
    for (i=0;i<row;i++){
        for (j=1;j<=col;j++){
            cout << j+i << " ";
        }
        cout << "\n";
    }
}