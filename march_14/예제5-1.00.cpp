#include <iostream>
using namespace std;

int main(){
    int array[2][5]={0};

    int i,j;
    for (i=0;i<2;i++){
        for (j=0;j<5;j++){
            array[i][j]=(j+1)*(i+1);
        }
    }
    for (i=0;i<2;i++){
        for (j=0;j<5;j++){
            cout << "n배열의 요소는 "<< array[i][j] << "입니다." << endl;
        }
    }
}