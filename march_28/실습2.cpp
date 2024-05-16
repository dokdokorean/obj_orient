#include <iostream>
using namespace std;

void mul(int numbers[],int size){
    for (int i=0;i<size;i++){
        numbers[i] *=2;
        cout << numbers[i] << " ";
    }
    return;
}
void print(const int numbers[],int size){
    for (int i =0; i < size ; i++){
        cout << numbers[i]<< " ";
    }
    cout << "\n";
    return;
}

int main(){
    int number[5]={150,170,190,110,130};
    
    print(number,5);
    mul(number,5);
    return 0;
}