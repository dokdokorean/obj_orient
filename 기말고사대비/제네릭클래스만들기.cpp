#include <iostream>
using namespace std;

template <class T>
class Mystack
{
private:
    int tos;
    T data[100];
public:
    Mystack();
    void push(T element);
    T pop();
};

template <class T>
Mystack <T>::Mystack(){
    tos = -1;
}

template <class T>
void Mystack<T>::push(T element){
    if(tos==99){
        cout << "stack full";
        return;
    }
    tos ++;
    data[tos]=element;
}
template <class T>
T Mystack<T>::pop(){
    T retData;
    if (tos ==-1){
        cout << "stack empty";
        return 0;
    }
    retData = data[tos--];
    return retData;
}

int main(){
    Mystack<int> iStack;
    iStack.push(3);
    cout << iStack.pop()<< endl;

    Mystack<double> dStack;
    dStack.push(3.5);
    cout << dStack.pop() <<endl;

    Mystack<char> *p =new Mystack<char>();
    p-> push('a');
    cout << p->pop()<< endl;
    delete p;
}

