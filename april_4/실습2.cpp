#include <iostream> 
using namespace std;
// -> 뭐야 이건 ㅋㅋㅋㅋ 집가서 수정해라 돌아가게
int main(){
    const int numRows=10;
    const int numCols=10;
    int product[numRows][numCols]={0};
    int startNum;
    int endNum;

do{
    cout << "출력을 시작하고자 하는 범위를 입력하십시오";
    cin >> startNum;
    cout << "출력을 종료하고자 하는 벙위를 입력하십시오:";
    cin >> endNum;
}
while (startNum < 1 || startNum>9 || endNum < 1 || endNum>9 || startNum>endNum);
    for (int row=startNum ; row<endNum+1;++row){ // -> 이건 만들고,
        for (int col =1;col<numCols ; ++col){
            product[row][col]=row*col;
        }
    }
    for(int row = startNum;row < endNum +1;++row){ // -> 이건 출력하고.
        for (int col=1;col<numCols;++col){
            cout<< product[row][col]<<"\t";
        }
        cout << "\n";
    }
}
