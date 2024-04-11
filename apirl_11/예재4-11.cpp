#include <iostream> 
#include <string>
using namespace std;

int main(){
    string str;
    string address("울산광역시 울주군");
    string copyAddress(address);

    char text[] ={'L','o','v','e',' ','c','+','+','\0'};
    string title(text);

    cout << str << endl;
    cout << address << endl;
    cout << copyAddress << endl;
    cout << title << endl;

}