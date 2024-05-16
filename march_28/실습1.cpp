#include <iostream>
using namespace std;

int main(){
    const int capacity = 10;
    int numbers[capacity];
    int size;

    do
    {
        cout << "enter the size (1to 10)";
        cin >> size;

    } while (size<1 || size>capacity);

    cout << "enter" << size << "integers :";
    for (int i = 0 ; i < size ; i ++){
        cin >> numbers[i];
    }

    for (int i = size-1 ; i>=0;i-- ){
        cout << numbers[i] << " ";
    }
    return 0;
}