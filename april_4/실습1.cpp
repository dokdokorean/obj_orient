#include <iostream> // -> 대학원 진학은 신중하게 하도록..
using namespace std;

//-> 집가서 이해하면서 수정하기
void multipleByTwo(int numbers[],int size){
    for (int i=0;i<size;i++){
        numbers[i]*=2;
    }
    return ;
}
void print(const int numbers[],int size){
    for (int i=0;i<size;i++){
        cout<<numbers[i]<<" ";
    }
    cout<<endl;
}
void inputnum(int numbers[],int num){
    for (int i=0;i<num;i++){
        cin>>numbers[i];
    }
}
int main(){
    int numbers[5]={0};
    inputnum(numbers,5);
    print(numbers,5);
    multipleByTwo(numbers,5);
    print(numbers, 5);
    return 0;
}